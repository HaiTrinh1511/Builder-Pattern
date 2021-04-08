#include "../include/car.h"
#include "../include/car_builder.h"

#include <iostream>
#include <string>

using namespace std;

Car *Director::create_car(CarBuilder *builder)
{
    builder->build_type();
    builder->build_color();
    builder->build_engine();
    builder->build_name();
    builder->build_version();
    return builder->get_car();
}
