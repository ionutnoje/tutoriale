import numpy as np

python_list = [1,2,3,4]
numpy_array = np.array(python_list) # putem sa adaugam asa sau
numpy_array2 = np.array([1,2,3,4,5,6,7])

for i in python_list:
    print(i) #printam toate elementele din lista python
print("\n")

for i in numpy_array:
    print(i) # printam toate elementele din arrayul numpy
print("\n")

for i in numpy_array2:
    print(i) #printam toate elementele din arrayul numpy2
print("\n")


#adaugare de element in lista python_list prin concatenare
python_list = python_list + [10] # se adauga prin concatenare

for i in python_list:
    print(i)
print("\n")

#adaugare de elemente in lista python_list prin metoda .append()
python_list.append(100)

for i in python_list:
    print(i)
print("\n")


#adaugare element in array ul numpy prin concatenare nu se poate
numpy_array = numpy_array + [10000] #aceasta operatie o sa adauge 10000 la fiecare element existent in array

for i in numpy_array:
    print(i)
print("\n")

#adaugare element in array ul numpy prin .append() nu o sa mearga pentru ca nu are aceasta metoda


#adunarea arrayurilor de tip numpy
numpy_array = numpy_array + numpy_array

for i in numpy_array:
    print(i)
print("\n")


#adunarea listelor din python
python_list = python_list + python_list # nu o sa se adune valorile celor 2 liste ci o sa se concateneze

for i in python_list:
    print(i)
print("\n")



# inmultirea unui array numpy
print(2 * numpy_array)

# inmultirea listei python

print(2 * python_list) # o sa printeze de 2 ori continutul listei


#ridicare la putere a array numpy
print(numpy_array**2)

#ridicare la putere a python list
#print(python_list**2) # nu poate sa faca asa ceva....nu suporta

#alte operatii posibile cu numpy

numpy_array = np.sqrt(numpy_array)
for i in numpy_array:
    print(i)
print("\n")


numpy_array = np.exp(numpy_array)
for i in numpy_array:
    print(i)
print("\n")



numpy_array = np.log(numpy_array)
for i in numpy_array:
    print(i)
print("\n")