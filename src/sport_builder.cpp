#include "../include/car.h"
#include "../include/car_builder.h"

#include <iostream>
#include <string>

using namespace std;

void SportBuilder::build_type()
{
    car_type = new Car("Sport car");
}

void SportBuilder::build_engine()
{
    car_type->set_engine("6.5L L539 V12");
}

void SportBuilder::build_color()
{
    car_type->set_color("Yellow");
}

SportBuilder::~SportBuilder()
{  
       delete car_type;
}