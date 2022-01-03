# valiable = a container for value. behaves as the value that it contains

#################################################################

#variabile de tip string

first_name = "ionut"      #asa se declara o variabila pentru nume
print(first_name)     #asa se printeaza o variabila

print("hello " + first_name)      #se poate adauga si alt string in functia de print

print("tipul de data pe in care este stocat numele tau este " +str(type(first_name)))       #functia type() o sa returneze tipul variabilei dintre paranteze, aici name

last_name = "noje"

full_name = first_name + " " + last_name

print("numele tau complet este: " + full_name)

################################################################


#variabile de tip int

age = 20
#age = age + 1
age += 1
print(age)
print(type(age))
print("your age is: " + str(age))

################################################################


#variabile de tip float

height = 175.5
print(height)
print("tipul de data care iti contine inaltimea este: " +str(type(height)))
print("inaltimea ta este: " + str(height) + " cm")

#################################################################


#variabila de tip boolean

human = False
print(human)
print("tipul de data este: " + str(type(human)))