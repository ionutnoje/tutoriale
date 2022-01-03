# set = collection which is unordered, unidexed. No duplicate values

########################################################################
utensils = {"fork","spoon","knife"}

utensils.add("napkin")
#utensils.remove("fork")
#utensils.clear();

for x in utensils:
    print(x)    #cum valorile din set nu sunt indexate la fiecare rulare a printului o sa avem un alt output
print("\n"*2)
#################################################################################

dishes = {"bowl","plate","cup","knife"}

utensils.update(dishes) # o sa adauge toate valorile din dishes in utendils

for x in utensils:
    print(x)
print("\n"*2)
################################################################################

dinner_table = utensils.union(dishes) # o sa atribuie unirea celor doua seturi unui alt set

for x in dinner_table:
    print(x)
print("\n"*2)

#################################################################################

print(utensils.difference(dishes)) # o sa se afiseze ce are setul utensils si nu are dishes
print(utensils.intersection(dishes)) # o sa returneze ce au in comun dele doua seturi
