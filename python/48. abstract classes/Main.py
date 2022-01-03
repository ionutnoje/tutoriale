# prevent a user from creating an object of that class
# + compels a user to override abstract methods in a child

# abstract class = a class which contains one or more abstract methods.
# abstract method = a method that has a declaration but does not have an implementation

from Vehicle import Vehicle
from Motorcycle import Motorcycle
from Car import Car

car = Car()
motorcycle = Motorcycle()

car.go()
car.stop()

motorcycle.go()
motorcycle.stop()