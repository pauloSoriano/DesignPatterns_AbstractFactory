from FerrariFactory import FerrariFactory
from FordFactory import FordFactory

if __name__ == "__main__":
    print("init factory...")    
    ferrariFactory = FerrariFactory()
    fordFactory = FordFactory()
    
    redcar = ferrariFactory.createCar()
    bluecar = fordFactory.createCar()

    print(f"this ferrari is {redcar.color}")
    print(f"this ford is {bluecar.color}")    