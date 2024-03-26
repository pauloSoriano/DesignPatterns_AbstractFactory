using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CS_AbstractFactory {
    class CarFactory : ICarFactory {
        public ICar CreateBlueCar() => new BlueCar();

        public ICar CreateRedCar() => new RedCar();
    }
}