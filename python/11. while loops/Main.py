# while loop = a statement that will execute it's block of code,
#               as long as it's condition remeins true

##########################################################################

name = ""

while len(name) == 0:
    name = input("care este numele tau: ")

print("salutare " + name)


##########################################################################

name1 = None

while not name1:
    name1 = input("numele tau este: " )

print("salutare " + name1)