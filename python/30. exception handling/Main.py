# exception = events detected during execution that interrupt the flow of a program

try:
    numerator = int(input("numerator: "))
    denominator = int(input("denominator: "))
    result = numerator / denominator
except ZeroDivisionError as e:
    print(e)
    print("you can't devide by 0 idiot")
except ValueError as e:
    print(e)
    print("enter only numbers pls")
except Exception as e:
    print(e)
    print("something went wrong")
else:
    print(result)
finally:
    # locul unde daca lucram cu fisiere o sa le inchidem
    print("this will always execute")
