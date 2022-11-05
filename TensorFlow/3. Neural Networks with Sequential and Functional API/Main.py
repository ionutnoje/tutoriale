import os

os.environ['TF_CPP_MIN_LOG_LEVEL'] = '2'

import tensorflow as tf
import tensorflow.keras as keras
from tensorflow.keras import layers
from tensorflow.keras.datasets import mnist
import pydot
import graphviz

# loading the dataset

(x_train, y_train), (x_test, y_test) = mnist.load_data()
# print(x_test.shape)  # (10000, 28, 28)   10000 de poze fiecare sunte de 28 de pixeli pe 28 de pixeli
# print(y_test.shape)

# x_train = x_train.reshape(-1, 28 * 28)# -1 ca sa pastreze valorile asa cum sunt si sa le mutam pe un vector de 28 pe 28 (input layer)
# conversia o sa se faci si o sa avem vectori numpy cu valori de tip float64 si noi avem nevoie de float32
# deci o sa setam noi formatul si trebuie si normalizate, deoarece noi avem acum valori intre 0 si 255 si vrem intre 0 si 1

x_train = x_train.reshape(-1, 28 * 28).astype("float32") / 255.0  # impartire pentru normalizare
x_test = x_test.reshape(-1, 28 * 28).astype("float32") / 255.0

# cream modelul Sequential API din keras (very convenient, nor very flexible) one input mapped to one output
model = keras.Sequential(
    [  # aici punem layer urile

        layers.Dense(512, activation='relu'),  # layer fully connected hidden
        layers.Dense(256, activation='relu'),  # hidden layer fully connected
        layers.Dense(10)  # output layer
    ]
)

model.compile(  # aici ii spunem la keras cum sa configureze partea de training
    loss=keras.losses.SparseCategoricalCrossentropy(from_logits=True),

    optimizer=keras.optimizers.Adam(learning_rate=0.01),
    metrics=['accuracy']
)

model.fit(x_train,y_train, batch_size= 32, epochs=5, verbose=2)
model.evaluate(x_test,y_test, batch_size= 32, verbose=2)

model.summary()