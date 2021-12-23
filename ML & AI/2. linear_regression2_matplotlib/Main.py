# model de ML care prezice o nota a unui elev bazat pe note trecute, ore de studiu, si alte atribute
# folosim linear regression


import pandas as pd
import numpy as np
import sklearn
from sklearn import linear_model
from sklearn.utils import shuffle
import matplotlib.pyplot as pyplot
import pickle
from matplotlib import style

data = pd.read_csv("student-mat.csv", sep=";")  # asa o sa citeasca datele din document, iar fiecare atribut este delimitat de un ; de aceea o sa setam delimitatorul sa fie ; astfel o sa stie de unde sa ia datele

data = data[["G1", "G2", "G3", "studytime", "failures", "absences"]]    # toate acestea sunt atribute    # asa setam ce date o sa si folosim din toate datele din document, selectam datele care ne intereseaza
# de pe site(toate de mai sus se gasesc pe site: https://archive.ics.uci.edu/ml/datasets/Student+Performance):
# G1 este prima nota intre 0 si 20
# G2 este a doua nota intre 0 si 20
# G3 este nota finala intre 0 si 20

print(data.head()) # o sa printeze primele 5 date din dataset

predict = "G3" # valoarea pe care incercam sa o prezicem, nota finala

#   atributele sunt lucrurile pe care le stim si le avem despre ceva
#   label-urile sunt valorile pe care vrem sa le prezicem (aflam) cu ajutorul atributelor


X = np.array(data.drop([predict], 1))   # o sa returneze un dataframe fara valoarea lui G3, pentru ca incercam sa antrenam modelul si salvam tot intr-un array,adica o sa avem o baza de date noua fara coloana G3
y = np.array(data[predict]) # o sa avem o baza de date unde avem numai coloana cu G3

x_train, x_test, y_train, y_test = sklearn.model_selection.train_test_split(X, y, test_size = 0.1)

# practic cele 4 variabile sunt portiuni din data seturile de mai sus ale lui X si respectiv y,pentru ca incercam sa antrenam modelul pe o parte din datele noastre sau pe alte date,
# diferite de cele pe care vrem sa racem teste pentru ca asa o sa se antreneze pe datele din care o sa il punem sa prezica G3,deci ii dam o parte din date ca sa nu se antreneze pe datele pe care vrem sa i le dam la final
# test_size reprezinta procentul de date pe care le impartim la cele 4 sub seturi de date: x_train, y_train, x_test, y_test


# cu bucata asta salvam modelul
"""
linear = linear_model.LinearRegression() # aici definim ca o sa folosim linear regression

linear.fit(x_train, y_train) # aici ii dam subseturile de date cu care trebuie sa lucreze
acc = linear.score(x_test, y_test) # aici o sa returneze cat de precis este modelul

print("precizia modelului: " + str(acc))

# salvarea modelului pentru rulari viitoare cu alte valori pentru acele atribute se foloseste libraria pickle
with open("studentmodel.pickle", "wb") as f:
    pickle.dump(linear, f)"""
# pana aici


# pentru salvarea celui mai bun model
# se ruleaza o data dupa se scoate pentru ca avem salvat modelul cel mai bun dupa cele n rulari din forul de mai jos
"""
best = 0
for _ in range(30):
    x_train, x_test, y_train, y_test = sklearn.model_selection.train_test_split(X, y, test_size=0.1)

    linear = linear_model.LinearRegression()  # aici definim ca o sa folosim linear regression

    linear.fit(x_train, y_train)  # aici ii dam subseturile de date cu care trebuie sa lucreze
    acc = linear.score(x_test, y_test)  # aici o sa returneze cat de precis este modelul

    print("precizia modelului: " + str(acc))

    if acc > best:
        # salvarea modelului pentru rulari viitoare cu alte valori pentru acele atribute se foloseste libraria pickle
        with open("studentmodel.pickle", "wb") as f:
            pickle.dump(linear, f)
"""


#########



# asa putem sa folosim un model deja antrenat
pickle_in = open("studentmodel.pickle", "rb")
linear = pickle.load(pickle_in)
# pana aici





print('Coefficient: \n', linear.coef_)
print('Intercept: \n', linear.intercept_)

predictions = linear.predict(x_test) # pana acum am folosit x_train si y_train ca sa pregatim modelul, acum o sa ii dam date noi pe care trebuie sa dea o predictie, adica o sa folosim x_test, atributele din x_test

for x in range(len(predictions)):
    print("predictia modelului: " + str(predictions[x]) + " atributele: " + str(x_test[x]) + " labelul: " + str(y_test[x]))


# afisare date pe un grafic

p = "G1"

style.use("ggplot")
pyplot.scatter(data[p], data["G3"])
pyplot.xlabel(p)
pyplot.ylabel("final grade")
pyplot.show()

#  pana aici















