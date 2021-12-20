# duck typing = concept where the class of an object is less important than the methods/attributes
#               class type is not checked if minimum methods/attributes are present
#               "If it walks like a duck, and it quacks like a duck, then it must be a duck."


from Chicken import Chicken
from Duck import Duck
from Person import Person


duck = Duck()
chicken = Chicken()
person = Person()

# desi in metoda de catch la implementare am scris ca poate sa primeasca numai obiecte de tip duck
# poate sa primeasca si alte obiecte cat timp acele obiecte au si metodele si atributele acelei clase din implementarea metodei catch


person.catch(duck)
person.catch(chicken)
