#include "CarFactory.cpp"
#include "RedCar.cpp"

class FerrariCarFactory : public CarFactory {
public:
	std::unique_ptr<Car> CreateCar() override {
		return std::make_unique<RedCar>();
	};
};