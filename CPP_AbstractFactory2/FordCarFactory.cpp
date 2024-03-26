#include "CarFactory.cpp"
#include "BlueCar.cpp"

class FordCarFactory : public CarFactory {
public:
	std::unique_ptr<Car> CreateCar() override {
		return std::make_unique<BlueCar>();
	};
};