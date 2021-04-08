#ifndef _CAR_BUILDER_H
#define _CAR_BUILDER_H
#include <iostream>
#include <string>
#include "car.h"
using namespace std;

class CarBuilder
{
protected:
    Car *car_type;
    
public:
    virtual void build_type() = 0;
    void build_engine() {};
    virtual void build_color() = 0;
    void build_name();
    void build_version();
    Car *get_car();
    virtual ~CarBuilder();
};

class SuvBuilder : public CarBuilder
{
public:
    void build_type();
    void build_engine();
    void build_color();
    ~SuvBuilder();
};

class ElecBuilder : public CarBuilder
{
public:
    void build_type();
    void build_engine();
    void build_color();
    ~ElecBuilder();
};

class SportBuilder : public CarBuilder
{
public:
    void build_type();
    void build_engine();
    void build_color();
    ~SportBuilder();
};

class Director
{
    CarBuilder *builder;

public:
    Car *create_car(CarBuilder *builder);
};

#endif