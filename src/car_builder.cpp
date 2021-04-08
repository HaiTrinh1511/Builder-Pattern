#include <iostream>
#include <string>

using namespace std;

#include "../include/car.h"
#include "../include/car_builder.h"


void CarBuilder::build_name()
{
    string name_car;
    cout << "Enter name of car: " << endl;
    cin >> name_car;
    car_type->set_name(name_car);

}

void CarBuilder::build_version()
{
    string version1;
    cout << "Enter version:" << endl;
    cin >> version1;
    car_type->set_version(version1);
}

Car *CarBuilder::get_car()
{
    return car_type;
}

CarBuilder::~CarBuilder()
{

}