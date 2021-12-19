
#folosind with open o sa se inchida automat fisierul dupa citire

try:
    with open("test.txt") as file:
        print(file.read())
except FileNotFoundError:
    print("that file was not found")

print(file.closed) # o sa returneze true daca fisierul este inchis