from Rectangle import Rectangle

class Cube(Rectangle):

    length = None
    width = None
    height = None

    def __init__(self,length,width,height):
        super().__init__(length,width)
        self.height = height

    def volume(self):
        return self.length*self.width*self.height