#include "../include/car.h"
#include "../include/car_builder.h"

#include <iostream>
#include <string>

using namespace std;


void SuvBuilder::build_type()
{
    car_type = new Car("SUV");
}

void SuvBuilder::build_engine()
{
    car_type->set_engine("Boxer 4 Cylinder");
}

void SuvBuilder::build_color()
{
    car_type->set_color("White");
}

SuvBuilder::~SuvBuilder()
{
    delete car_type;
}