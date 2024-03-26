#include "Car.cpp"

class RedCar : public Car {
public:
	std::string getColor() const override {
		return "red";
	}
};