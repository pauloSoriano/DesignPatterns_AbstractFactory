from Car import Car

class RedCar(Car):
    def __init__(self) :
        super(Car, self).__init__()
        self.color="red"