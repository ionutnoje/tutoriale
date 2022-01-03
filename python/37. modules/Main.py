# module = a file containing python code. May contain functions, calsses, etc.
# Used with modular programming, which is to separate a pragram into parts

import messages
import messages as m
from messages import hello,bye  # daca folosim asta nu mai trebuie sa punem m sau messages inainte de metode
#from messages import * # (this one is dangerous)


########################################################################


messages.hello()
messages.bye()


########################################################################

m.hello()
m.bye()

########################################################################

hello()
bye()