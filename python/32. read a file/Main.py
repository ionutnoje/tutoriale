
#folosind with open o sa se inchida automat fisierul dupa citire

#######################################################################
try:
    with open("test.txt","r") as file:
        print(file.read())
except FileNotFoundError:
    print("that file was not found")

print(file.closed) # o sa returneze true daca fisierul este inchis

#######################################################################

# Python program to read
# file word by word

# opening the text file
with open("test.txt","r") as file:
    # reading each line
    for line in file:
        # reading each word
        for word in line.split():
            # displaying the words
            print(word)