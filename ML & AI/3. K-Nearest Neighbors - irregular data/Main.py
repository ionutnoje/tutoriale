import sklearn
from sklearn.utils import shuffle
from sklearn.neighbors import KNeighborsClassifier
import pandas as pd
import numpy as np
from sklearn import linear_model, preprocessing


# am adaugat (buying,maint,door,persons,lug_boot,safety,class) in fisierul car.data
# pentru ca o sa folosim pandas ca sa citim datele si pentru el primul rand trebuie sa fie cu numele
# atributelor pe care le folosim
# la aceasta varianta de ML nu are rost sa salvam modelul pentru ca trebuie de fiecare data sa verifice fiecare punct, deci o salvare a modelului nu isi are rostul


data = pd.read_csv("car.data") # folosim pandas ca sa citim datele din data set
# print(data.head())

# pentru ca atributele noastre sunt de tip string majoritatea trebuie sa le transformam in valori numerice de tip int
# ca sa putem sa realizam calcule cu ele
# pentru asta o sa folosim o functionalitate din sklearn si anume preprocessing

le = preprocessing.LabelEncoder()# le este un obiect cu care o sa facem transformarile atributelor de tip string in valori numerice de tip int
# o sa cream cate o lista pentru fiecare atribut

buying = le.fit_transform(list(data["buying"])) # o sa returneze un numpy array toate valorile pentru atributul buying o sa se creeze o lista in care toate valorile string sunt transformate in valori numerice int
maint = le.fit_transform(list(data["maint"])) # o sa returneze un numpy array toate valorile pentru atributul buying o sa se creeze o lista in care toate valorile string sunt transformate in valori numerice int
door = le.fit_transform(list(data["door"])) # o sa returneze un numpy array toate valorile pentru atributul buying o sa se creeze o lista in care toate valorile string sunt transformate in valori numerice int
persons = le.fit_transform(list(data["persons"])) # o sa returneze un numpy array toate valorile pentru atributul buying o sa se creeze o lista in care toate valorile string sunt transformate in valori numerice int
lug_boot = le.fit_transform(list(data["lug_boot"])) # o sa returneze un numpy array toate valorile pentru atributul buying o sa se creeze o lista in care toate valorile string sunt transformate in valori numerice int
safety = le.fit_transform(list(data["safety"])) # o sa returneze un numpy array toate valorile pentru atributul buying o sa se creeze o lista in care toate valorile string sunt transformate in valori numerice int
cls = le.fit_transform(list(data["class"])) # o sa returneze un numpy array toate valorile pentru atributul buying o sa se creeze o lista in care toate valorile string sunt transformate in valori numerice int


# toate listele o sa le lipim intr o lista mare la final

predict = "class"

X = list(zip(buying, maint, door, persons, lug_boot, safety)) # functia zip o sa le puna pe toate intr o enumeratia de tuples
y = list(cls)


x_train, x_test, y_train, y_test = sklearn.model_selection.train_test_split(X,y, test_size= 0.1)

model = KNeighborsClassifier(n_neighbors=9)

model.fit(x_train, y_train)

acc = model.score(x_test, y_test)
print("precizie: " + str(acc))

predicted = model.predict(x_test)
names = ["unacc","acc","good","vgood"]

for x in range(len(predicted)):
    print("predicted: ", names[predicted[x]], "data ", x_test[x], "Actual: ", names[y_test[x]])
    """
    n = model.kneighbors([x_test[x]], 9, True)
    print("N: ",n)"""








# k neighbors o sa caute n (valoare introdusa de noi impara) cele mai apropiate puncte de pe grafic fata de punctul nostru
# apoi o sa se verifice cate puncte avem din cele selectate din fiecare clasa
# clasa cu cei mai multi vecini gasiti o sa decida ca punctul nostru sa faca parte din clasa respectiva

# explicatie matematica
# o sa se calculeze distantele del a punctul nostru la restul de puncte de pe grafic si o sa se aleaga primele n cele mai apropiate valori
# distanta euclidiana
# punctul nostru: P(x1,y1) si un punct de pe grafic P1(x2,y2)
# distanta = sqrt[(x2-x1)^2 + (y2-y1)^2]
# se poate folosi si pentru 3D
