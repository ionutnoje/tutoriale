import os

source = "test.txt"
destination = "C:\\Users\\noje_\\OneDrive\\Desktop\\test1.txt"

try:
    if os.path.exists(destination):
        print("there is already a file there")
    else:
        os.replace(source,destination)
        print(source+ " was moved")
except FileNotFoundError:
    print(source + " was not find")

