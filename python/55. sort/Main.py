# sort() method = used with lists
# sort() function = used with iterables

##########################################################################
# sortare de lista in ordine alfabetica

student = ["squidward","sandy","patrick","spongebob","mr.krabs"]

student.sort()

for i in student:
    print(i)

##########################################################################
# sortare de lista in ordine infers alfabetica

students = ["squidward","sandy","patrick","spongebob","mr.krabs"]

students.sort(reverse = True)

print()

for i in students:
    print(i)

student = ["squidward","sandy","patrick","spongebob","mr.krabs"]


#########################################################################
# sortare de tuple in ordine alfabetica

student1 = ("squidward","sandy","patrick","spongebob","mr.krabs")

sorted_students = sorted(student1)

print()

for i in sorted_students:
    print(i)


##########################################################################
# sortare de tuple in ordine invers alfabetica

students2 = ["squidward","sandy","patrick","spongebob","mr.krabs"]

sorted_students2 = sorted(students2,reverse = True)

print()

for i in sorted_students2:
    print(i)

##########################################################################
# sortare de lista de  tuples in care sunt mai multe tipure de date

students3 = [("squidward","F",60),
             ("sandy","A",33),
             ("patrick","D",37),
             ("spingebob","B",20),
             ("mr.krabs","C",78)]
# sortare dupa prima coloana din fiecare tuple
students3.sort()

print()

for i in students3:
    print(i)


# sortare in functie de al doilea camp din fiecare tuple

print()

grade = lambda grades:grades[1]

students3.sort(key= grade)

for i in students3:
    print(i)


# sortare in functie de ultimul camp din fiecare tuple

print()

age = lambda ages:ages[2]

students3.sort(key = age)

for i in students3:
    print(i)