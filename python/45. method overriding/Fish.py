from Predator import Predator
from Prey import Prey

class Fish(Prey,Predator):

    def hunt(self):
        print("the fish is hunting")

    def flee(self):
        print("the fish is fleeing")

