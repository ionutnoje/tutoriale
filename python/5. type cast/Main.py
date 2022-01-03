#type casting = convert the data type of a value to another data type

x = 1   #int
y = 2.1     #float
z = "3"     #str

print("valoarea variabilei x este: "+ str(x) + " si este de tip: " +str(type(x)))
print("valoarea variabilei y este: "+ str(y) + " si este de tip: " +str(type(y)))
print("valoarea variabilei z este: "+ str(z) + " si este de tip: " +str(type(z)))


print("\nfacem typecast la y in int")
y = int(y)
print("valoarea variabilei y este: "+ str(y) + " si este de tip: " +str(type(y)))


print("\nfacem typecast la z in int")
z = int(z)
print("valoarea variabilei z este: "+ str(z) + " si este de tip: " +str(type(z)))