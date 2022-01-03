from Car import Car

car_1 = Car("ferrari","458",2012,"red")

print(car_1.make)
print(car_1.model)
print(car_1.year)
print(car_1.color)

car_1.drive()
car_1.stop()

car_2 = Car("lamborghini","aventador svj",2020,"black")

print(car_2.make)
print(car_2.model)
print(car_2.year)
print(car_2.color)

car_2.drive()
car_2.stop()

car_2.make = "altceva"
