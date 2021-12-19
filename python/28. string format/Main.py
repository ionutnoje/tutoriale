# stf.format() = optional method that gives users
#                more control when displaying output
# este un fel de printf


#########################################################################



animal  = "cow"
item = "moon"

print("the " + animal + " jumped over the " + item)

#un fel de printf
print("the {} jumped over the {}".format(animal,item))

print("the {0} jumped over the {1}".format(animal,item))



#########################################################################



text = "the {} jumped over the {}"
print(text.format(animal,item))



########################################################################


name = "noje"
print("hello, my name is {}".format(name))
print("hello, my name is {:10}. Nice to meet you".format(name)) # o sa alocheze 10 spatii pentru afisarea numelui,deci o sa apara numele si dupa el o sa fie 10 - lungimea numelui de spatii libere
print("hello, my name is {:<10}. Nice to meet you".format(name))
print("hello, my name is {:>10}. Nice to meet you".format(name))
print("hello, my name is {:^10}. Nice to meet you".format(name))







########################################################################


number = 3.14159
number1 = 100000000

print("the number pi is {:.2f}".format(number)) # o sa printeze numai primele 2 cifre dupa . si si rotunjeste numarul
print("the number is {:,}".format(number1)) # o sa adauge automat , ca sa il transforme in o mie
print("the number is {:b}".format(number1)) # o sa returneze valoare in cod binar
print("the number is {:o}".format(number1)) # o sa returneze valoarea in octal
print("the number is {:X}".format(number1)) # o sa returneze valoare in hexa decimal
print("the number is {:E}".format(number)) # o sa returneze valoare in scientifuc notation
