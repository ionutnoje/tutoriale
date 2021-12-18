# 2d lists = a list of lists

###############################################################

drinks = ["coffee","soda","tea"]
dinner = ["pizza","hamburger","hotdog"]
dessert = ["cake","ice cream"]

food = [drinks,dinner,dessert]
print(food)


#################################################################

n = int(input("numarul de elemente din fiecare lista 1d: "))
m = int(input("numarul de liste 1d din lista 2d: "))



ar = [["" for j in range(n)] for i in range(m)]

# ["" for j in range(n)] o sa initializeze toate pozitiile din nr de elemente ale unei liste 1d
# for i in range(m)   adica pentru fiecare lista din lista 2d o sa se faca initializarile astea


for i in range(m):
    for j in range(n):
        k = int(input())
        ar[i][j] = k

for i in range(m):
    for j in range(n):
        print(ar[i][j],end = "")
    print()