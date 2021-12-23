# list  = used to store multiple items in a single variable

##############################################################

food = ["pizza","hamburger","hotdog","spaghetti"]

print(food)
print("primul element din lista este: " + food[0])

##############################################################

for i in range(len(food)):
    print("mancarea nr " + str(i) + " din lista este : " + food[i])


#################################################################


lista = []

n = int(input("nr de mancaruri: "))

for i in range(n):
    # ele = input("mancarea pe care vreti sa o introduceti: ")
    lista.append(input("mancarea pe care vreti sa o introduceti: "))

# print(lista)
for j in range(n):
    print(lista[j])

# lista.remove("pizza")     sterge valoarea cu numele pizza din lista
# lista.insert(0,"linear_regression1")    pe indexul 0 din lista o sa se insereza valoarea linear_regression1
# lista.sort()  o sa sorteze in ordine alfabetica lista
# lista.clear()     o sa stearga tot din lista


######################################################################