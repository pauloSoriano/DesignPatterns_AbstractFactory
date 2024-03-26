// CPP_AbstractFactory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "FerrariCarFactory.cpp"


int main()
{
    FerrariCarFactory carFactory;
    std::cout << "Car Factory init...\n";

    auto redCar = carFactory.CreateRedCar();
    std::cout << "this is a " << redCar->getColor() << " car.\n";

    auto blueCar = carFactory.CreateBlueCar();
    std::cout << "this is a " << blueCar->getColor() << " car.\n";

    return 0;
}