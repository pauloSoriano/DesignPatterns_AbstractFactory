from BlueCar import BlueCar
from Car import Car
from CarFactory import CarFactory

class FordFactory(CarFactory):
    def createCar(self) -> Car:
        return BlueCar()