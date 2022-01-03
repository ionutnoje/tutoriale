# list comprehension = a way to create a new list with less syntax
#                       can mimic certain lambda functions, easier to read
#                       list = [expression for item in iterable]
#                       list = [expression for item in iterable if conditional]
#                       list = [expression (if/else) for item in iterable]


##########################################################################
# cum faceam pana acum

squares = []                    # create an empty list
for i in range(1,11):           # create a for loop
    squares.append(i * i)       # define what each loop iteration should do
print(squares)


##########################################################################
# cu list comprehension

print()

squares1 = [i * i for i in range(1,11)]
print(squares1)


##########################################################################
# cum faceam pana acum

print()

students = [100,90,80,70,60,50,40,30,0]

passed_students = list(filter(lambda x:x >= 60, students))

print(passed_students)

##########################################################################
# cu list comprehension

print()

students1 = [100,90,80,70,60,50,40,30,0]

passed_students1 = [i for i in students1 if i >= 60]
passed_students2 = [i if i >= 60 else "Failed" for i in students1]
print(passed_students2)