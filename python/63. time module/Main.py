import time

print(time.ctime(0)) # convert a time expressed in seconds since epoch to a readable string
#                       epoch = when your computer thinks time began (reference point)


print(time.time()) # return current seconds since epoch

print(time.ctime(time.time())) # ne returneaza data curenta folosind cele 2 metode de mai sus

##########################################################################

time_object = time.localtime()
print(time_object)
local_time = time.strftime("%B %d %Y %H:%M:%S", time_object)
print(local_time)

##########################################################################

time_string = "20 April, 2021"
time_object1 = time.strptime(time_string,"%d %B, %Y")
print(time_object1)

##########################################################################

# (year, month, day, hours, minutes, secs, #day of the week, #day of the year, dst)
time_tuple = (2020,3,21,4,20,0,0,0,0)
time_string1 = time.asctime(time_tuple)
print(time_string1)


##########################################################################

# (year, month, day, hours, minutes, secs, #day of the week, #day of the year, dst)
time_tuple1 = (2020,3,21,4,20,0,0,0,0)
time_string2 = time.mktime(time_tuple)
print(time_string2)