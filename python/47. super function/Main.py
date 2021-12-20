# super() = Function used to give acces to the methods of a parent class
#           Returns a temporary obhect of a parent class when used

from Rectangle import Rectangle
from Square import Square
from Cube import Cube

square = Square(3,3)
cube = Cube(3,3,3)

print(square.area())
print(cube.volume())