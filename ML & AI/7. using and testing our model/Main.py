import tensorflow as tf
from tensorflow import keras
import numpy as np
import matplotlib.pyplot as plt
import os

os.environ["TF_CPP_MIN_LOG_LEVEL"] = "2"


data = keras.datasets.fashion_mnist
(train_images, train_labels), (test_images, test_labels) = data.load_data()


class_names = ['T-shirt/top', 'Trouser', 'Pullover', 'Dress', 'Coat',
               'Sandal', 'Shirt', 'Sneaker', 'Bag', 'Ankle boot']

train_images = train_images/255.0
test_images = test_images/255.0

model = keras.Sequential([
	keras.layers.Flatten(input_shape=(28,28)),
	keras.layers.Dense(128, activation="relu"),
	keras.layers.Dense(10, activation="softmax")
	])


model.compile(optimizer="adam", loss="sparse_categorical_crossentropy", metrics=["accuracy"])

model.fit(train_images, train_labels, epochs=5)


test_loss, test_acc = model.evaluate(test_images, test_labels)

print('\nTest accuracy:', test_acc)


predict = model.predict(test_images) # modul in care putem sa ii dam un input si sa ii zicem sa
                                     # ne prezica care este outputul

for i in range(5):
    plt.grid(False)
    plt.imshow(test_images[i], cmap= plt.cm.binary)
    plt.xlabel("Actual: "+ class_names[test_labels[i]])
    plt.title("Prediction" + class_names[np.argmax(predict[i])])
    plt.show()

# print(class_names[np.argmax(predict[0])]) # ca sa vedem care este din obiectele vestimentare
                                            # argmax o sa ia cea mai mare valoare din output

# daca vrem pentru o singura poza
# predict = model.predict([test_images[12]])


