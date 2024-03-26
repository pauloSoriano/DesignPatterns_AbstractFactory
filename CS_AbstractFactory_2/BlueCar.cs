using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CS_AbstractFactory_2 {
    internal class BlueCar : ICar {
        string _color = "blue";
        public string Color { get { return _color; } set { _color = value; } }

        public bool StartEngine() {
            return true;
        }
        public BlueCar() {
            Console.WriteLine("this car is color : {0}", Color);
        }
    }
}
