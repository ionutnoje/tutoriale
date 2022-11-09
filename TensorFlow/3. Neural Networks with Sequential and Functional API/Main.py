import os

os.environ["TF_CPP_MIN_LOG_LEVEL"] = "2"

import tensorflow as tf
import tensorflow.keras as keras
from tensorflow.keras import layers
from tensorflow.keras.datasets import mnist

physical_devices = tf.config.list_physical_devices("GPU")
tf.config.experimental.set_memory_growth(physical_devices[0], True)

(x_train, y_train), (x_test, y_test) = mnist.load_data()
x_train = x_train.reshape(-1, 28 * 28).astype("float32") / 255.0 #transformam inputurile intr un numpy vector de 784 spatii
x_test = x_test.reshape(-1, 28 * 28).astype("float32") / 255.0

#folosim -1 pentru ca trebuie sa convertim matricea primita ca vectori cu valori intre 0 si 1
#o poza de 28 pe 28 o sa fie transformata intr un vector cu 784 spatii
#deci x_train o sa contina toti acesti vectori
#folosim -1 pentru ca nu stiu cati vectori o sa avem, adica cate poze intra in training deci o sa calculeze calculatorul asta
#daca stim exact cate poza o sa avem pentru training putem sa schimbam valoarea -1 in acel nr


## Sequential API (Very convenient, not very flexible)
#model = keras.Sequential(
#    [
#        keras.Input(shape=(28 * 28)),
#        layers.Dense(512, activation="relu"),
#        layers.Dense(256, activation="relu"),
#        layers.Dense(10, activation="softmax"),
#    ]
#)

model = keras.Sequential()
model.add(keras.Input(shape=(784), name="input_layer"))
model.add(layers.Dense(512, activation="relu", name="hidden1"))
model.add(layers.Dense(256, activation="relu", name="hidden2"))
model.add(layers.Dense(10,activation="softmax", name="output_layer")) # daca nu avem activare aici trebuie ca la model.compile la loss...from_ligits sa fie true

## Functional API (A bit more flexible)
#inputs = keras.Input(shape=(784))
#x = layers.Dense(512, activation="relu", name="first_layer")(inputs)
#x = layers.Dense(256, activation="relu", name="second_layer")(x)
#outputs = layers.Dense(10, activation="softmax")(x)
#model = keras.Model(inputs=inputs, outputs=outputs)

model.compile(
    loss=keras.losses.SparseCategoricalCrossentropy(from_logits=False), # from logits false este pentru ca noi avem outputul nenormalizat
    optimizer=keras.optimizers.Adam(learning_rate=0.001),#adam este gradientul descendent
    metrics=["accuracy"],
)

model.fit(x_train, y_train, batch_size=32, epochs=5, verbose=2) # aici pornim rularea
model.evaluate(x_test, y_test, batch_size=32, verbose=2) # aici trecem la datele din testare

print(model.summary()) #putem sa printam numai dupa model.fit sau daca folosim adaugarea layerelor cu add atunci se poate si mai sus









