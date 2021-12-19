from Car import Car

# method chaining = calling multiple methods sequentially
#                   each call performs an action on the same obhect and returns self


car = Car()

##########################################################################
#normal way

car.turn_on()
car.drive()

##########################################################################
#method chaining

car.turn_on()\
    .drive()\
    .brake()\
    .turn_off()

