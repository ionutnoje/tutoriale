from Car import Car

car1 = Car("ferrari","458",2012,"red")
car2 = Car("lamborghini","aventador svj",2020,"black")

car1.wheels = 2;

print(car1.wheels)
print(car2.wheels)

Car.wheels = 2      #setam valoarea variabilei din clasa car in 2 din 4