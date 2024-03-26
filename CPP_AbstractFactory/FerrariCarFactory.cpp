#include "CarFactory.cpp"
#include "RedCar.cpp"
#include "BlueCar.cpp"

class FerrariCarFactory : public CarFactory {
	public:
		std::unique_ptr<Car> CreateRedCar() override{
			return std::make_unique<RedCar>();
		};
		std::unique_ptr<Car> CreateBlueCar() override{
			return std::make_unique<BlueCar>();
		};
};