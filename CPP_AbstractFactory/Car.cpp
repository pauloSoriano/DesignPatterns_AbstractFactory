#include <string>
#pragma once
class Car {
	public:
		virtual ~Car()=default;
		virtual std::string getColor() const = 0;
};