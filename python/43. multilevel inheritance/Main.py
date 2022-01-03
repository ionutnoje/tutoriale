from Organism import Organism
from Animal import Animal
from Dog import Dog

# multi-level inheritance = when a derived (child) class inherits another derived (child) class

dog = Dog()
print(dog.alive)
dog.eat()
dog.bark()

