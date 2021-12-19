# tuple = collection which is ordered and unchangeable
#         used to group together realted data


student = ("noje",20,"masculin")

print(student.count("noje"))     # o sa returneze o valoare int pentru nr de aparitii a valorii pe care am introduso intre paranteze

print(student.index("masculin"))   # o sa returneze indexul unde valoarea dintre parantezer este gasita in acel tuple

for x in student:
    print(x)

if "noje" in student:
    print("noje este in tuple")



