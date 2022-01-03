# nested loops = the "inner loop" will finish all of it's iterations before
#               finishing one iteration of the "outer  loop"


rows = int(input("cate randuri: "))
columns = int(input("cate coloane: "))
symbol = input("introduceti un simbol: ")

for i in range(rows):
    for j in range(columns):
        print(symbol, end = "")
    print()


