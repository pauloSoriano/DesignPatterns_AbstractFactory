#include <memory>
#include "Car.cpp"
class CarFactory {
	public:
		virtual ~CarFactory() = default;
		virtual std::unique_ptr<Car> CreateRedCar() = 0;
		virtual std::unique_ptr<Car> CreateBlueCar() = 0;
};