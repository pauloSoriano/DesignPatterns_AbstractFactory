from Car import Car
from CarFactory import CarFactory
from RedCar import RedCar

class FerrariFactory(CarFactory):
    def createCar(self) -> Car:
        return RedCar()