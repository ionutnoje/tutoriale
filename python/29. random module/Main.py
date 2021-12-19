import random

######################################################################
x = random.randint(1,6) #o sa genereze o val random intre 1 si 6
print(x)

y = random.random() #o sa genereze o val random float intre 0 si 1
print(y)

######################################################################
#mini joculet de piatra foarfeca hartie

myList = ["rock","paper","scissors"]
z = random.choice(myList)
print(z)


######################################################################
# .shuffle o sa aranjeze aleator valorile dintr un dictionar sau alte structuri de date

cards = [1,2,3,4,5,6,7,8,9,"J","Q","K","A"]
random.shuffle(cards)
print(cards)