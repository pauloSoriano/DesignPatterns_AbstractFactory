// See https://aka.ms/new-console-template for more information
using CS_AbstractFactory_2;

Console.WriteLine("Init Car Factory...");

ICarFactory ferrariFactory = new RedCarFactory();
ICar redFerrari = ferrariFactory.CreateCar();

ICarFactory fordFactory = new BlueCarFactory();
ICar blueFord = fordFactory.CreateCar();

Console.ReadLine();
