# *args = parameter that will pack all arguments into a tuple
#           useful so that a function can accept a varying amount of arguments

########################################################################

def add(num1,num2):
    sum = num1 + num2
    return sum


print(add(1,2))

#########################################################################

def addd(*args):
    sum = 0;
    for i in args:
        sum += i
    return sum

print(addd(1,2,3,4,5,6,7,8))

############################################################################

# un tuple nu poate fi schimbat dupa ce a primit valorile, daca vrem sa schimbam valori din tuple trebuie sa il castam ca si lista
# dupa asta o sa putem lucra cu el

def adddd(*args):
    sum = 0
    args = list(args)
    args[0] = 100;
    for i in args:
        sum += i
    return sum

print(adddd(1,2,3,4,5))