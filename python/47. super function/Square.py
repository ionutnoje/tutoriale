from Rectangle import Rectangle

class Square(Rectangle):

    length = None
    width = None

    def __init__(self,length,width):
        super().__init__(length,width)

    def area(self):
        return self.length * self.width