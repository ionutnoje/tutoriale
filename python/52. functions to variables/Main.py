def hello():
    print("hello")

###########################################################################

# hello()

# print(hello)
# hi = hello
# print(hi)

##########################################################################

hi = hello  # dupa comanda asta hi o sa aiba aceasi adresa in memorie ca si metoda hello

hi() # poate sa fie apelata dupa ca si o metoda si o sa faca exact ce faci si metoda hello

##########################################################################

say = print
say("salutare, printez asta din alta metoda decat print")