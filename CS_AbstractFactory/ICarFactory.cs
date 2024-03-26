using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CS_AbstractFactory {
    interface ICarFactory {
        ICar CreateRedCar();
        ICar CreateBlueCar();
    }
}
