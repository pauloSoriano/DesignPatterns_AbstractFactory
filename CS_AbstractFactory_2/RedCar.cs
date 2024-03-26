using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CS_AbstractFactory_2 {
    class RedCar : ICar {
        string _color = "red";
        public string Color { get { return _color; }  set { _color = value; } }

        public bool StartEngine() {
            return true;
        }

        public RedCar() {
            Console.WriteLine("this car is color : {0}", Color);
        }
    }
}
