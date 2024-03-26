from Car import Car

class BlueCar(Car):
    def __init__(self) :
        super(Car, self).__init__()
        self.color="blue"   