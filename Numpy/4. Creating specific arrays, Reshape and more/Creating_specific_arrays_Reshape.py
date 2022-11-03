import numpy as np

array_of_zeros = np.zeros((3, 3)) # array de 3 linii si 3 coloane
print(array_of_zeros)
print("\n")

array_of_ones = np.ones((3, 3)) # array de 3 linii si 3 coloane
print(array_of_ones)
print("\n")

array_of_ones_int = np.ones((3, 3) , dtype=np.int16) # array de 3 linii si 3 coloane toate de tip int16
print(array_of_ones_int)
print("\n")

array_of_ones_int2 = np.ones([3, 3] , dtype=np.int16) # array de 3 linii si 3 coloane toate de tip int16
print(array_of_ones_int2)
print("\n")

array_empty = np.empty([3,3] , dtype=np.int16)
print(array_empty)
print("\n")


array_range = np.arange(1,10) # printeaza toate elementele de la 1 pana la 10 exclusiv
print(array_range)
print("\n")


array_range_interval = np.arange(1,10 ,.5) # printeaza toate elementele de la 1 pana la 10 exclusiv
print(array_range_interval)
print("\n")



array_linspace = np.linspace(1,5)# creaza o lista de 50(default) de nr egal separate in intervalul (1, 5)
print(array_linspace)
print("\n")




array_linspace1 = np.linspace(1,5, 10) # creaza o lista de 10 de nr egal separate in intervalul (1, 5)
print(array_linspace1)
print("\n")



array_random = np.random.random((2,3))
print(array_random)
print("\n")


#reshape: putem sa dam reshape la orice vector dar sa nu depasim marimea initiala adica: initial (2,3) -> reshape (3,2) sau (6,1) sau (1,6)

array_reshape = array_random.reshape((6,1))
print(array_reshape)
print("\n")


array_reshape1 = array_random.reshape((1,-1)) #daca punem -1 o sa isi calculeze singur marimea necesara
print(array_reshape1)
print("\n")

# array urile reshapuite trebuie salvate in alte variabile


#exemple pentru vstack: pentru vstack toate array urile pe care dorim sa le stacam terbuie sa aiba nr de coloane egale

a = np.zeros((2,3))
b = np.ones((3,3))

g = np.vstack((a,b))
print(g)
print("\n")


#exemple pentru hstack: pentru hstack toate array urile pe care dorim sa le stacam terbuie sa aiba nr de linii egale


a1 = np.zeros((3,3))
b1 = np.ones((3,1))

g1 = np.hstack((a1,b1))
print(g1)
print("\n")



#exemple pentru hsplit: pentru asta o sa ne imparta arrayul dorit in n arryuri

print(np.hsplit(g,3))
print("\n")


#exemple pentru vsplit: pentru asta o sa ne imparta arrayul dorit in n arryuri

print(np.vsplit(g1,3))
print("\n")









