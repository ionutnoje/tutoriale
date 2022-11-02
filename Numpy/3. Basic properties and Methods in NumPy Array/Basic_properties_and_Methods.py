import numpy as np


array1 = np.array([1, 2, 3])  # one dimensional array
array2 = np.array([[1, 2], [3, 4], [5, 6]])  # 2 dimensional array

print(array1[0])
print(array2[0][0])

matrix1 = np.matrix([[1, 2], [3, 4], [5, 6]])

print(matrix1)


matrix1_transpusa = matrix1.transpose(); # transpusa matricei
print(matrix1_transpusa)

print(matrix1_transpusa.shape) # o sa ne returneze marimea matricei


print(matrix1.ndim)  # o sa returneze nr de dimensiuni pe care le are array ul nostru/ matricea

print(array1.size) # returneaza nr de elemente din array

# cream un array numpy cu valori de tip float
matrix_float = np.array([2,3], dtype=np.float64)

for i in matrix_float:
    print(i)
print("\n")

print(matrix_float.dtype) # printam tipul de date pe care le avem in matrice

print(matrix_float.itemsize) # printam marimea elementelor din matrice (unui element)

print(matrix1.max()) # printam maximul din matrice

print(matrix1.min()) # printam minimul din matrice

print(matrix1.sum()) # printam suma elementelor din matrice

print(matrix1.prod()) # printam rezultatul inmultirii tuturor elementelor din matrice

print(matrix1.sum(axis=0)) # printam suma elementelor de pe coloane, pentru fiecare coloana

print(matrix1.sum(axis=1)) # printam suma elementelor de pe linii