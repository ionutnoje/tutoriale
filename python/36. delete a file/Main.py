import os
from pathlib import Path
import shutil

#########################################################################

#f = open("test.txt", "x") # asa se creaza un fisier in python

print("path ul fisierului test.txt este: ")

#path = Path("test.txt").absolute()
path = os.path.abspath("test.txt")

print(path)


##########################################################################
#asa se sterge un fisier

try:
    os.remove(path)
except FileNotFoundError:
    print("that file was not found")
except PermissionError:
    print("you do not have permission to delete that")


#########################################################################
#asa se sterge un folder

path1 = path = os.path.abspath("folder")

try:
    os.rmdir(path1)
except FileNotFoundError:
    print("that folder was not found")
except PermissionError:
    print("you do not have permission to delete that")
else:
    print(path1 + " was deleted")


#########################################################################
#cu aceasta functie nu se poate sterge un folder care mai are si fisiere inauntru

path2 = path = os.path.abspath("folder")

try:
    os.rmdir(path2)
except FileNotFoundError:
    print("that folder was not found")
except PermissionError:
    print("you do not have permission to delete that")
except OSError:
    print("you cannot delete that using that function")
else:
    print(path1 + " was deleted")


#########################################################################
#asa se sterge un folder care are inauntru alte fisiere

path3 = path = os.path.abspath("folder")

try:
    shutil.rmtree(path)
except FileNotFoundError:
    print("that folder was not found")
except PermissionError:
    print("you do not have permission to delete that")

else:
    print(path1 + " was deleted")
