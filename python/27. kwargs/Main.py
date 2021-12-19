# **kwargs = parameter that will pack all arguments into a dictionary
#            useful so that a function can accept a varying amount of keyword arguments


##########################################################################

def hello(first, last):
    print("hallo " + first + " " + last)


hello(first = "noje", last = "ionut")


##########################################################################

def helloo(**kwargs):
    print("hallo " + kwargs['first'] + kwargs['last'] )


helloo(first = "noje", last = "ionut")

##########################################################################

def hellooo(**kwargs):
    print("hello", end = " ")
    for key,value in kwargs.items():
        print(value, end = " ")

hellooo(title = "Mr. ",first = "noje",middle = "bogdan" ,last = "ionut")