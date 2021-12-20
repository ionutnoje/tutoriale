# walrus operator :=

# new to Python 3.8
# assignment expression aka walrus operator
# assigns values to variables as part of a larger expression

##########################################################################

happy = True
print(happy)

##########################################################################
# in timp ce printeaza si da valoarea variabilei happy, cu asta putem sa si printam si si sa dam valori la variabile

print(happy := False)

#########################################################################

foods = list()
while True:
    food = input("what food do you like?")
    if food == "quit":
        break
    foods.append(food)

##########################################################################

foods1 = list()
while food1 := input("what food do you like?") != "quit":
    foods.append(food1)