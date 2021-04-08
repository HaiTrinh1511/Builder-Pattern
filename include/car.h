#ifndef _CAR_H_
#define _CAR_H_
#include <iostream>
#include <string>
using namespace std;


class Car
{
    string car_type;
    string car_color;
    string car_engine;

    string car_name;
    string car_version;

public:
    Car(const string &type);
    void set_engine(const string &engine);
    void set_color(const string &color);
    string get_engine();
    string get_color();

    void set_name(const string &name);
    void set_version(const string &version);
    string get_name();
    string get_version();

    void display();
};

#endif