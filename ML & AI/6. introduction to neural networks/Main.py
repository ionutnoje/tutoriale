# Loading and looking at data

import tensorflow as tf
from tensorflow import keras
import numpy as np
import matplotlib.pyplot as plt
from keras.models import Sequential
from tensorflow.keras.models import Sequential
import os

os.environ["TF_CPP_MIN_LOG_LEVEL"] = "2"   # ca sa nu mai apara warningurile de la inceput :)

data = keras.datasets.fashion_mnist

# trebuie sa impoartim datele in date de training si date de test
# 80-90% din date se trimit la training restul la teste

(train_images, train_labels), (test_images, test_labels) = data.load_data()

# ##print(train_labels[0])
# labelurile sunt intre 0 si 9
# pentru data setul acesta avem 10 labeluri, asta insamna ca fiecare imagine o sa aiba asociat cate un label

# o sa cream o lista in care o sa specificam ce reprezinta fiecare label: adica label 0 o sa fie tricouri....si tot
# asa cu toate labelurile
# asta se gaseste si pe site ul de la tensorflow la datasetul acesta

class_names = ['T-shirt/top', 'Trouser', 'Pullover', 'Dress', 'Coat',
               'Sandal', 'Shirt', 'Sneaker', 'Bag', 'Ankle boot']

# plt.imshow(train_images[7], cmap=plt.cm.binary) # cu functia asta putem sa vizualizam imaginea
# plt.show() # ca sa apara fereastra cu imaginea pe ecran


# cu cele 2 impartire de mai jos formatam numerele din poze ca sa lucram mai usor cu ele
# putem face asta pentru ca imaginile sunt stocate intr un numpy array
# imaginile sunt de 28 pe 28 pixeli, deci avem un array de 28 pe 28 cu valori numerice
train_images = train_images / 255.0
test_images = test_images / 255.0

# print(train_images[7]) # functie care ne arata cum este construita fotografia, colectia de liste de cifre pentru
# culorile de pe poza pentru fiecare rand de pixeli din poza

# nu putem sa dam datele asa cum sunt la neuroni, trebuie sa o formatam
# flatten the data = deoarece noi avem o matrice de 28 pe 28 si totul este inglobat intr o lista
# iar fiecare linie de pixeli , fiecare pixel este intr o lista,iar fiecare noi trebuie sa eliminam
# listele interioare, nu datele ci listele [ ] cele 2 paranteze pentru fiecare rand
# adica rezultatul trebuie sa fie o lista cu 728 de valori adica pixeli enumerati unul dupa altul
# adica o sa avem o lista cu 784 valori
# de ex avem [[1],[2],[3] ... 28]
#            [[],[],[],[].......]

# rezultatul o sa fie [1,2,4,5,3,5,6,7,7,5,.....784 valori]


# structura schemei neuronale
# input layer = o sa fie format din 784 neuroni, cate un neuron pentru fiecare pixel

# output layer = o sa fie format din 10 neuroni pentru fiecare tip de articol vestimentar
#               fiecare neuron o sa fie practic un procentaj, adica de ex ii dam o poza cu un pantalon
#               fiecare neuron desi fiecare specific pentru un articol vestimentar o sa returneze un procentaj
#               pentru cat % crede ca acea poza ii apartine
#               o sa vedem fiecare neuron ce procentaj are si il alegem pe cel cu cel mai mare procentaj

# hidden layers
# o sa avem un hidden layer cu 128 neuroni (numarul de neuroni pentru hideen layer este arbitrar, dar de obicei se
# alege o suma intre 30-50% din
# nr de neuroni din input layer


###################################################
# crearea modelului

"""
model = keras.Sequential([  # keras.sequential inseamna o inlantuire de layere de neuroni pe care urmeaza sa
    # le definim mai jos
    keras.layers.Flatten(input_shape=(28, 28)),  # asta este input layer, despre flatten am scris mai sus
    keras.layer.Dense(128, activation="relu"),  # dense layer = a fully connected layer, si functia
    # de activare rectified linear unit
    keras.layer.Dense(10, activation="softmax")  # functia de activare softmax o sa atribuie cate o valoare pentru
    # fiecare neuron, valoare care repr
    # cat % crede un neuron din output layer ca imaginea este ceea ce el
    # reprezinta, taote valorile adunate
    # dau 1, si se alege neuronul cu valoarea cea mai mare
])

"""

# documentarie pentru tipuri de modele puse la dispozitie de keras (https://keras.io/api/models/)
model = keras.Sequential([  # keras.sequential inseamna o inlantuire de layere de neuroni pe care urmeaza sa
    # le definim mai jos
    keras.layers.Flatten(input_shape=(28, 28)),  # asta este input layer, despre flatten am scris mai sus
    keras.layers.Dense(128, activation="relu"),  # dense layer = a fully connected layer, si functia
    # de activare rectified linear unit
    keras.layers.Dense(10, activation="softmax")  # functia de activare softmax o sa atribuie cate o valoare pentru
    # fiecare neuron, valoare care repr
    # cat % crede un neuron din output layer ca imaginea este ceea ce el
    # reprezinta, taote valorile adunate
    # dau 1, si se alege neuronul cu valoarea cea mai mare
])



model.compile(optimizer="adam", loss="sparse_categorical_crossentropy", metrics=["accuracy"])
# optimizer adam(a method of stochastic optimization): Adam is an optimization algorithm that can be used instead of
#      the classical stochastic gradient descent procedure to update network weights iterative based in training data.pip install tensorflow==1.13.1

# loss function:    Generally speaking, the loss function is used to compute the quantity that the the model should
# seek to minimize during training. For regression models, the commonly used loss function used is mean squared error
#                   function while for classification models predicting the probability, the loss function most
#                   commonly used is cross entropy
#                   Cross entropy loss function is an optimization function which is used in case of training a
#                   classification model which classifies the data by predicting the probability of whether the data
#                   belongs to one class or
#                   the other class.


model.fit(train_images, train_labels, epochs=8)
# epochs reprezinta de cate ori o sa dam aceeasi poza la modelul nosru, in acest caz 5
# in fiecare epach o sa primeasca aceleasi poze dar intr o ordine diferita
# ca sa se antreneze

test_loss, test_acc = model.evaluate(test_images, test_labels)
print("tested acc: ", test_acc)

