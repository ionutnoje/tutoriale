#   lambda function = function written in 1 line using lambda keyword
#                       accepts any number of arguments, but only has one expression.
#                       (think of it as a shortcut)
#                       (useful if needed for short period of time, throw-away)

#   lambda parameters: expressions

##########################################################################
#   varianta normala

def double(x):
    return x * 2

print(double(5))


##########################################################################
#   varianta cu lambda

double = lambda x: x * 2

print(double(5))

##########################################################################
# varianta cu lambda

multiply = lambda x, y: x * y
print(multiply(5,4))

##########################################################################
# varianta cu lambda

add = lambda x,y,z: x + y + z
print(add(1,2,3))

##########################################################################

full_name = lambda first_name, last_name: first_name + " " + last_name
print(full_name("noje","ionut"))

##########################################################################

age_check = lambda age:True if age >= 18 else False
print(age_check(29))