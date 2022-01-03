# dictionary comprehension = create dictionaries using an expression
#                            can replace for loops and certain lambda functions
#
# dictionary = {key: expression for (key,value) in iterable}
# dictionary = {key: expression for (key,value) in iterable if conditional}
#---------------------------------------------------------------------------

#########################################################################
cities_in_F = {'New york':32, "Boston":64, 'Los angeles':100, 'Chicaho':50}

cities_in_C = {key: ((value - 32 ) * (5/9)) for (key,value) in cities_in_F.items()}

print(cities_in_C)

##########################################################################

weather = {"new york": "snowing", "boston": "sunny", "los angeles": "sunny", "chicago": "cloudy"}

sunny_weather = {key: value for (key,value) in weather.items() if value == "sunny"}
print(sunny_weather)

############################################################################

cities = {'New york':32, "Boston":64, 'Los angeles':100, 'Chicaho':50}

desc_cities = {key: ("warm" if value >= 40 else "cold") for (key,value) in cities.items()}
print(desc_cities)

############################################################################

cities = {'New york':32, "Boston":64, 'Los angeles':100, 'Chicaho':50}

def check_temp(value):
    if value >= 70:
        return "hot"
    elif 69 >= value >= 40:
        return "warm"
    else:
        return "cold"

desc_cities1 = {key: check_temp(value) for (key,value) in cities.items()}

print(desc_cities1)