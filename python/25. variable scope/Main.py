# scope =   the region that a variable is recognized
#           A variable is only available from inside the region it is ccreated.
#           A global and locally scoped version of a variable can be created

name = "ionut"    #variabila name este vizibila in tot programul pentru ca este declarata global

def display_name():
    name = "noje"    #variabila name este locala functiei si o sa fie vizibila numai in contextul functiei
    print(name)



display_name()
print(name)