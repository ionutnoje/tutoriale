import tensorflow as tf
from tensorflow import keras
from keras.models import Sequential
import numpy as np
from tensorflow.python.keras.datasets import imdb

data = keras.datasets.imdb

(train_data, train_labels), (test_data, test_labels) = data.load_data(num_words=10000)
# num_words o sa ne dea numai primele 10000 cele mai utilizate cuvinte din data setul nostru
# acest dataset are foarte multe cuvinte asa ca o sa le luam pe primele 10000 cele mai utilizate

# print(train_data[0])
# ce o sa ne returneze acest print este o lista de cifre
# [1, 14, 22, 16, 43, 530, 973, 1622, 1385, 65, 458, 4468, 66,
# 3941, 4, 173, 36, 256, 5, 25, 100, 43, 838, 112, 50, 670, 2, 9, 35, 480, 284, 5, 150, 4, 172, 112, 167, 2, 336,
# 385, 39, 4, 172, 4536, 1111, 17, 546, 38, 13, 447, 4, 192, 50, 16, 6, 147, 2025, 19, 14, 22, 4, 1920, 4613, 469, 4,
# 22, 71, 87, 12, 16, 43, 530, 38, 76, 15, 13, 1247, 4, 22, 17, 515, 17, 12, 16, 626, 18, 2, 5, 62, 386, 12, 8, 316,
# 8, 106, 5, 4, 2223, 5244, 16, 480, 66, 3785, 33, 4, 130, 12, 16, 38, 619, 5, 25, 124, 51, 36, 135, 48, 25, 1415,
# 33, 6, 22, 12, 215, 28, 77, 52, 5, 14, 407, 16, 82, 2, 8, 4, 107, 117, 5952, 15, 256, 4, 2, 7, 3766, 5, 723, 36,
# 71, 43, 530, 476, 26, 400, 317, 46, 7, 4, 2, 1029, 13, 104, 88, 4, 381, 15, 297, 98, 32, 2071, 56, 26, 141, 6, 194,
# 7486, 18, 4, 226, 22, 21, 134, 476, 26, 480, 5, 144, 30, 5535, 18, 51, 36, 28, 224, 92, 25, 104, 4, 226, 65, 16,
# 38, 1334, 88, 12, 16, 283, 5, 16, 4472, 113, 103, 32, 15, 16, 5345, 19, 178, 32]

# fiecare numar din aceasta lista reprezinta un cuvant transformat in valori int


word_index = data.get_word_index()

word_index = {k: (v + 3) for k, v in word_index.items()}

word_index["<PAD>"] = 0
word_index["<Start>"] = 1
word_index["UNK"] = 2
word_index["<UNUSED>"] = 3

reverse_word_index = dict([(value, key) for (key, value) in word_index.items()])

train_data = keras.preprocessing.sequence.pad_sequences(train_data, value=word_index["<PAD>"], padding="post",
                                                        maxlen=250)
test_data = keras.preprocessing.sequence.pad_sequences(test_data, value=word_index["<PAD>"], padding="post", maxlen=250)

print(len(train_data), len(test_data))


def decode_review(text):
    return " ".join([reverse_word_index.get(i, "?") for i in text])


# functie care o sa decodeze valorile int in cuvinte
# pe care mai jos le putem printa
# print(decode_review(test_data[0]))


# construirea modelului

model = tf.keras.Sequential()
model.add(tf.keras.layers.Embedding(88000, 16))
model.add(tf.keras.layers.GlobalAveragePooling1D())
model.add(tf.keras.layers.Dense(16, activation="relu"))
model.add(tf.keras.layers.Dense(1, activation="sigmoid"))

# keras.layers.embedding o sa ia cuvintele asemanatoare sau care inseamna aproape acelasi lucru si o sa le gurpeze
# ex good cu happy inseamna cam acelasi lucru si o sa fie  grupate
# ia fiecare cuvant din input si il transforma intr un vector si il da mai departe la urmatoarele layere


# GlobalAveragePooling1D daca avem o ecuatie cu grad foarte mare face in asa fel in cat sa reduca din grad ca sa fie
# facute calculele mai repede si usor

# dense layer: toti neuronii din layerul anterior o sa fie legati la fiecare dintre neuronii din layerul dense

model.summary()

# compile and train the model

model.compile(optimizer="adam", loss=tf.keras.losses.BinaryCrossentropy(), metrics=["accuracy"])

x_val = train_data[:10000]  # validation data
x_train = train_data[10000:]

y_val = train_labels[:10000]
y_train = train_labels[10000:]

fitModel = model.fit(x_train, y_train, epochs=40, batch_size=512, validation_data=(x_val, y_val), verbose=1)
results = model.evaluate(test_data, test_labels)
print(results)

"""

test_review = test_data[0]
predict = model.predict([test_review])
print("review: ")
print(decode_review(test_review))
print("prediction: " + str(predict[0]))
print("Actual: " + str(test_labels[0]))
print(results)


nu merge sa testez un anumit review, trebuie sa revin la el

"""

