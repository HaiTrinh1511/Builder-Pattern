#include "../include/car.h"
#include "../include/car_builder.h"

#include <iostream>
#include <string>

using namespace std;

void ElecBuilder::build_type()
{
    car_type = new Car("Electric Car");
}

void ElecBuilder::build_engine()
{
    car_type->set_engine("Electric Engine");
}

void ElecBuilder::build_color()
{
    car_type->set_color("Black");
}

ElecBuilder::~ElecBuilder()
{
    delete car_type;
}