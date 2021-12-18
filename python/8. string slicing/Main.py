# slicing = create a substring by extracting elements from another string
#           indexing[] or slice()
#           pntru indexing [start:stop:step]  se poate si numai cate o val: adica numai cu o val o sa ia litera de pe indexul respectiv
#           pentru slicing este la fel dar in loc de : se pune ,


####################################################################

full_name = "noje ionut"

first_name = full_name[0:4]
#first_name = full_name[:4]
print(first_name)

last_name = full_name[5:10]
#last_name = full_name[5:]
print(last_name)

funky_name = full_name[0:8:2]
print(funky_name)

reversed_name = full_name[::-1]
print(reversed_name)


#########################################################################

#slicing()

website1= "http://google.com"

#pentru functiile acestea putem sa folosim numere pozitive, asta inseamna ca o asa se uite dupa litere din partea stanga catrea dreapta, adica 0 o sa fie prima litera din string
#pentru numerele negative este fix invers

slice = slice(7,-4)

print(website1[slice])

##########################################################

website2 = "http://wikipedia.com"

print(website2[slice])











