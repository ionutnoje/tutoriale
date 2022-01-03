
##########################################################################
text = str(input("text care sa fie scris in fisier: "))

#daca o sa deschidem fisierul in modul W o sa scrie peste ce este deja in fisier

#with open("test.txt","w") as file:
 #   file.write(text)
  #  file.write("\n")


##########################################################################

#daca o sa deschidem fisierul in modul a adica append, o sa puna textul in continuare la cel deja existent

with open("test.txt","a") as file:
    file.write(text)
    file.write("\n")
