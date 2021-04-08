#include <iostream>
#include <string>
using namespace std;
#include "../include/car.h"

Car::Car(const string &type) : car_type(type)
{

}

void Car::set_engine(const string &engine)
{
    car_engine = engine;
}

void Car::set_color(const string &color)
{
    car_color = color;
}

void Car::set_name(const string &name)
{
    car_name = name;
}

void Car::set_version(const string &version)
{
    car_version = version;
}

string Car::get_engine()
{
    return car_engine;
}

string Car::get_color()
{
    return car_color;
}

string Car::get_name()
{
    return car_name;
}

string Car::get_version()
{
    return car_version;
}

void Car::display()
{
    cout << "=============================" << endl;
    cout << " Car type: " << car_type << endl;
    cout << " Car name: " << car_name << endl;
    cout << " Car color: " << car_color << endl;
    cout << " Car engine: " << car_engine << endl;
    cout << " Car version: " << car_version << endl;
    cout << "=============================" << endl;
}
