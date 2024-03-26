#include <memory>
#include "Car.cpp"
#pragma once
class CarFactory {
public:
	virtual ~CarFactory() = default;
	virtual std::unique_ptr<Car> CreateCar() = 0;
};