# higher order function = a function that either:
#                           1. accepts a function as an argument
#                                   or
#                           2. returns a function
#                           (in python, functions are also treated as objects)


##########################################################################
#exemplul 1



def loud(text):
    return text.upper()

def quiet(text):
    return text.lower()

def hello(func):
    text = func("hello")
    print(text)



hello(loud)

hello(quiet)


##########################################################################
#varianta 2

def divisor(x):
     def divident(y):
         return y/x
     return divident


divide = divisor(2)
print(divide(10))




##########################################################################