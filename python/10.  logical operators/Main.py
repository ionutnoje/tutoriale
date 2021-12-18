# logical poerators (and,or,not) = used to check if two or more conditional statements are true

temp = int(input("care este temperatura afara: " ))

if temp >= 0 and temp <= 30:
    print("temperatura este ok afara")
    print("poti sa iesi afara")
elif temp < 0 or temp > 30:
    print("temperatura este rea azi")
    print("stati inauntru")
#elif not(temp >= 0 and temp <= 30):
#   print("afara este urat")
 #  print("nu iesiti afara")