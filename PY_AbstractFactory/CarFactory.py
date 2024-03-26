from abc import ABC, abstractmethod
from Car import Car

class CarFactory(ABC):
    @abstractmethod
    def createRedCar(self) -> Car:
        pass

    @abstractmethod
    def createBlueCar(self) -> Car:
        pass