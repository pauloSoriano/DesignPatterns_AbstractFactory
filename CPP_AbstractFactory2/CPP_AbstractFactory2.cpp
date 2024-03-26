// CPP_AbstractFactory2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "FerrariCarFactory.cpp"
#include "FordCarFactory.cpp"

int main()
{
    FerrariCarFactory ferrariFactory;
    FordCarFactory fordFactory;
    std::cout << "Car Factory init...\n";

    auto redCar = ferrariFactory.CreateCar();
    std::cout << "this is a " << redCar->getColor() << " car.\n";

    auto blueCar = fordFactory.CreateCar();
    std::cout << "this is a " << blueCar->getColor() << " car.\n";

    return 0;
}