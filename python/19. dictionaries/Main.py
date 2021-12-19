# dictionaries = A changeable, unordered collection of unique key:value pairs
#                Fast because they use hashing, allow us to access a value quickly

#########################################################################

capitals = {'Romania':'Bucuresti',
            'India':'New Dehli',
            'China':'Beijing',
            'Russia':'Moscow'}

print(capitals['Romania']) # ca sa accesam o valoare din dictionareul capitals o sa folosim cheile asociate si anume tarile

print(capitals.get('Germania')) # metoda get o sa returneze valoarea none daca cheia data intre paranteze nu este legata la o valoare, iar daca are o valoare o sa o printeze


print(capitals.keys()) # o sa printeze numai cheile din dictionare
print(capitals.values()) # o sa printeze numai valorile din dictionare
print(capitals.items()) # o sa printeze toate valorile din dictionare

for key,value in capitals.items():
    print(key,value)
print("\n"*2)

##############################################################################

capitals.update({'Germania':'Berlin'}) # cu functia update putem sa adaugam valori in dictionarul nostru

for key,value in capitals.items():
    print(key,value)
print("\n"*2)

#########################################################################

capitals.update({'Romania':'Tg Mures'}) # cu functia update putem si sa schimbam valori deja existente in dictionar

for key,value in capitals.items():
    print(key,value)
print("\n"*2)

########################################################################

capitals.pop('China') # cu pop putem sa stergem o valoare din dictionar


for key,value in capitals.items():
    print(key,value)
print("\n"*2)

capitals.clear() # clear o sa stearga intreg dictionarul
