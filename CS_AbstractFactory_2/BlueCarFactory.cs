using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CS_AbstractFactory_2 {
    class BlueCarFactory : ICarFactory {
        public ICar CreateCar() => new BlueCar();
    }
}