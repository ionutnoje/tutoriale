# indexing operator [] = gives acces to a sequence's element (str,lists,tuples)


###########################################################################
name = "noje ionut!"

if name[0].islower():
    name = name.capitalize()

print(name)

###########################################################################

first_name = name[0:4].upper()
last_name = name[5:].upper()
last_character = name[-1]

print(first_name)
print(last_name)
print(last_character)

############################################################################