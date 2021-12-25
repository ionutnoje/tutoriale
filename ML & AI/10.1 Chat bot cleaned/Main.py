"""
in fisierul intents.json avem patterns si responses. La patterns avem ceea ce un utilizator ar putea intreba sau scrie
catre chat-bot, iar in responses avem ceea ce chat-botul ar putea sa raspunde

in tag o sa fie un cuvant care o sa descrie in mare la ce se refera patterns si responses



acestea (tagul, patterns, responses si context set) o sa fie inglobate intr un intent

fiecare intent are dictionare in care sunt stocate datele(intrebarile, raspunsurile)


"""

import nltk
from nltk.stem.lancaster import LancasterStemmer

stemmer = LancasterStemmer()

import numpy
import tflearn
import tensorflow
import random
import json

with open("intents.json") as file:
    data = json.load(file)

words = [] # lista in care stocam toate cuvintele tokenizate din fiecare pattern din fiecare intent
labels = [] # lista in care o sa stocam fiecare tag al fiecarul intent folosit
docs_x = [] # aici o sa fie paternurile prin care o sa trecem cu for each ul de mai jos
docs_y = [] # pentru fiecare pattern salvat in docs_x o sa salvam si din ce intent face parte prin a salva tagul

# deci fiecare pattern din docs_x o sa aiba atribuit tagul in docs_y


for intent in data["intents"]: # cu forul asta o sa facem un loop prin toate intenturile
    for pattern in intent["patterns"]:  # acum facem un loop prin patterns, ci intent["patterns"] putem sa accesam
                                        # datele respective
        # de aici o sa incepem sa facem stemming, adica sa reducem cuvintele la radacina lor (whats o sa fie what, sau
        # daca la final de propozitie avem: is anyone there?, o sa se scoata ?
        # prin eliminarea caracterelor in plus si tot ce ar putea face cuvantul diferit de root, modelul o sa fie mai precis
        # ca sa putem sa facem acest stemming trebuie sa facem inainte tokenizere
        # tokenizarea o sa returneze fiecare cuvant dintr o propozitie separat
        wrds = nltk.word_tokenize(pattern) # practic aici wrds este o lista in care o sa stocheze toate cuvintele din primul pattern
                                            # nltk ne ajuta cu functia de tokenizare
        words.extend(wrds) # in lista words o sa stocam toate cuvintele gastie in patternuri
        docs_x.append(wrds) # aici salvam patternul in lista docs_x
        docs_y.append(intent["tag"]) # aici salvam tagul specific pentru patternul salvat in docs_x

    if intent["tag"] not in labels: # aici o sa verificam daca tagul intentului la care am ajuns cu for each ul de mai sus se afla
                                    # in lista labels, daca nu se afla o sa fie adaugat in lista labels
        labels.append(intent["tag"])

words = [stemmer.stem(w.lower()) for w in words if w != "?"] # o sa ia fiecare cuvant salvat in lista words si o sa il reduca la
                                                            # forma root, apoi o sa elimine cuvintele care apar iar, deci o sa avem
                                                            # o singura aparitie pentru fiecare cuvant
                                                            # != "?" ca sa nu bage in seama semnele de intrebare pentru ca de obicei
                                                            # sunt cele mai folosite la astfel de chat bots
words = sorted(list(set(words))) # aici se face stergerea daca un cuvant apare de mai multe ori, utilizand set

labels = sorted(labels)

# avem toate cuvintele pregatite, dar nu pot sa fie utilizate ca date de intrare
# trebuie transformate in numere intregi
# o sa cream un asa numit bag of words care reprezinta toate cuvintele dintr un anumit pattern
# o sa il folosim pentru a ne antrena modelul
# transformarea cuvintelor in numere poate fi facute in 2 moduri: print integer encoding sau one hot encoding
# explicatii pentru integer encoding:
#           As a first step, each unique category value is assigned an integer value.
#           For example, “red” is 1, “green” is 2, and “blue” is 3.
#           This is called a label encoding or an integer encoding and is easily reversible.
#
# explicatii pentru one hot encoding:
#           In the “color” variable example, there are 3 categories and therefore 3 binary variables are needed. A “1” value is
#              placed in the binary variable for the color and “0” values for the other colors.
#               red,	green,	blue
#               1,		0,		0
#               0,		1,		0
#               0,		0,		1

# pentru one hot encoding o sa avem o lista de lungimea a cate cuvinte avem
# deci practic avem o lista in care avem atatea spatii cate cuvinte avem in total
# sa zicem ca avem o propozitie: Ionut este tare :P
# in lista aceea o sa se puna 1 pe pozitia cu numele meu, 1 pe pozitia unde se regaseste cuvantul este, si tot asa
# practic o sa ne dam seama ce cuvinte se afla in fiecare propozitie si asta o sa ne ajute pentru antrenarea modelului
# sa isi dea seama ca daca intr o propozitie avem anumite cuvinte poate inseamna ceva
# cuvintele o sa fie in forma root

training = []
output = []

out_empty = [0 for _ in range(len(labels))] # aici face one hot encoder si pentru lista de taguri
                                            # aici o sa avem o lista de marimea a cate taguri avem


"""
# exemplu de enumerate:
#           # Python program to illustrate
#           # enumerate function in loops
#             l1 = ["eat","sleep","repeat"]
#
#           # printing the tuples in object directly
#           for ele in enumerate(l1):
#               print (ele)
#           print
#           # changing index and printing separately
#           for count,ele in enumerate(l1,100):
#               print (count,ele)
#
#           #getting desired output from tuple
#           for count,ele in enumerate(l1):
#               print(count)
#               print(ele)


# outputul o sa fie :
# (0, 'eat')
# (1, 'sleep')
# (2, 'repeat')

# 100 eat
# 101 sleep
# 102 repeat

# 0
# eat
# 1
# sleep
# 2
# repeat

"""


for x, doc in enumerate(docs_x): # enumerate o sa fiecarui element din docs_x cate o val int incepand de la 0,
                                 # x este valoare int atribuita, iar doc o sa fie o lista in care se afla cuvantul
    bag = [] # aici o sa avem cuvintele dupa one hot encoder

    # doc_x contine patternurile gasite
    # doc o sa contina cate un pattern pe rand

    wrds = [stemmer.stem(w.lower()) for w in doc]
    # pentru ca doc o sa contina cate un pattern pe rand, forul o sa ia fiecare cuvant pe rand din
    # pattern si o sa il reduca la forma lui root si o sa fie atribuit in lista wrds(care cred ca este diferita de cea de mai sus)


    for w in words: # aici o sa face un for loop prin toate cuvintele din words
                    # in words sunt toate cuvintele folosite in fiecare pattern, o singura data

        if w in wrds: # aici verificam daca cuvantul din aceasta iteratie din lista de words in lista wrds, daca exista , se adauga 1
                      # pe prima pozitie din dista bag, la urmatoare iteratie pe pozitie+ 1 si tot asa
            bag.append(1)
        else:
            bag.append(0)

    # de aici o sa generam outputul

    output_row = out_empty[:] # output_row o sa fie o lista de inturi plina de atatea 0 cate taguri avem la fel ca out_empty
    output_row[labels.index(docs_y[x])] = 1
                                 # x este indexul unui pattern
                                 # docs_y[x] o sa returneze un string, si anume tagul patternului la care se face referire
                                 # labels.index o sa returneze indexul acelui tag din lista de taguri labels
                                 # iar indexul acelui tag o sa fie pus pe 1 in output row ca sa se stie ca este folosit
    training.append(bag) # in bag avem cuvintele folosite
    output.append(output_row) # in output_row avem tagurile folosite

training = numpy.array(training) # le transformam in numpy.arrays pentru ca ne trebuie pentru tflearn
output = numpy.array(output) # la fel si pentru output

tensorflow.compat.v1.reset_default_graph()

"""
input layerul o sa fie format din atatia neuroni cate cuvinte au fost folosite 
primul hidden layer o sa fie cu 8 neuroni, fully connected, adica toti neuronii din layerul trecut o sa fie legati de fiecare neuron din primul hidden layer
al doilea hidden layer tot cu 8 neuroni, fully connected si el
output layer are 6 neuroni pentru ca avem 6 taguri, fiecare neuron repr un tag, si cu functia de activare softmax fiecare o sa primeasca
             o sa primeasca un procent, cat la suta crede modelul ca cuvintele folosite fac parte din tagul respectiv

cele 2 hidden layere o sa se ocupe prin a si da seama ce cuvinte folosite pot sa duca la folosirea unui anume tag
"""


net = tflearn.input_data(shape=[None, len(training[0])]) # o sa astepte sa primeasca un array de marimea a cate cuvinte au fost folostie
net = tflearn.fully_connected(net, 8) # hidden layer
net = tflearn.fully_connected(net, 8) # hidden layer
net = tflearn.fully_connected(net, len(output[0]), activation="softmax") # o sa ne dea o probabilitate de apartinere pentru fiecare tag
                                                                         # len(output[0]) o sa fie numarul de neuroni
net = tflearn.regression(net) #

model = tflearn.DNN(net) # dnn este un tip de model

model.fit(training, output, n_epoch=1000, batch_size=8, show_metric=True)
model.save("model.tflearn")
