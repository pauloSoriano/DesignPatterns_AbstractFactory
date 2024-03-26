from abc import ABC, abstractmethod
from Car import Car

class CarFactory(ABC):
    @abstractmethod
    def createCar(self) -> Car:
        pass