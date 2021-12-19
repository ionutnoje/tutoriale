class Car:

    make = None     # class variable
    model = None    # class variable
    year = None     # class variable
    color = None    # class variable
    wheels = 4      # class variable


    def __init__(self,make,model,year,color):
        self.make = make        #instance variable
        self.model = model      #instance variable
        self.year = year        #instance variable
        self.color = color      #instance variable