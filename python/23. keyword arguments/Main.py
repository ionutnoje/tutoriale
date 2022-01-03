# keyword arguments =   arguments preceded by an identifier when we pass them to a function
#                       The order of the arguments doesn't matter, unlike positional arguments
#                       Python knows the names of the arguments that our function receives

#########################################################################

#example of positional arguments
#

def hello(first,middle,last):
    print("hello " + first + " " + middle + " " + last)

hello("noje","ionut","bogdan")

########################################################################

#example of keyword arguments

hello(last = "noje",middle = "ionut",first = "bogdan")