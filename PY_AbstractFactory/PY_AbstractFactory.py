from FerrariFactory import FerrariFactory


if __name__ == "__main__":
    print("init factory...")    
    ferrariFactory = FerrariFactory()
    redcar = ferrariFactory.createRedCar()
    bluecar = ferrariFactory.createBlueCar()

    print(f"this car is {redcar.color}")
    print(f"this car is {bluecar.color}")    