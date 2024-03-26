// See https://aka.ms/new-console-template for more information
using CS_AbstractFactory;

Console.WriteLine("Init Car Factory...");

ICarFactory ferrariFactory = new CarFactory();

ferrariFactory.CreateBlueCar();
ferrariFactory.CreateRedCar();

Console.ReadLine();
