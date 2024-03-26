#include "Car.cpp"

class BlueCar : public Car {
public:
	std::string getColor() const override {
		return "blue";
	}
};