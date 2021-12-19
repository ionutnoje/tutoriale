# copyfile() =     copies contents of a file
# copy =     copyfile() + permission mode + destination can be a directory
# copy2 =       copy()  + copies metadata (file's creation and modification times)

import shutil

shutil.copyfile("test.txt","copy.txt")  #src,dest
# shutil.copyfile("test.txt","aici o sa fie un path pana la locul unde vrem sa fie facut fisierul")  #src,dest

#shutil.copy("test.txt","copy.txt")  #src,dest
#shutil.copy2("test.txt","copy.txt")  #src,dest