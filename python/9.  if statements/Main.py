# if statement = a block of code that will execute if it's condition is true

age = int(input("care este varsta ta: "))

if age == 100:
    print("esti batran frate")
elif age >= 18:
    print("esti un adult")
elif age < 0:
    print("nu esti nascut")
else:
    print("esti inca un copil")
