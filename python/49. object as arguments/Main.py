from Car import Car
from Motorcycle import Motorcycle


#metoda inafara clasei car care schimba culoarea masini
def change_color(car,color):

    car.color = color


car1 = Car()
car2 = Car()
car3 = Car()

motorcycle1 = Motorcycle()

change_color(car1,"red")
change_color(car2,"whire")
change_color(car3,"blue")
change_color(motorcycle1,"red")

print(car1.color)
print(car2.color)
print(car3.color)
print(motorcycle1.color)