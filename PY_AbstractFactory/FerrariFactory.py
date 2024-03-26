from BlueCar import BlueCar
from Car import Car
from CarFactory import CarFactory
from RedCar import RedCar

class FerrariFactory(CarFactory):
    def createRedCar(self) -> Car:
        return RedCar()

    def createBlueCar(self) -> Car:
        return BlueCar()