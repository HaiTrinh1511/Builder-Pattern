#ifndef _CAR_PROGRAM_H_
#define _CAR_PROGRAM_H_

#include "menu_program.h"
#include "car.h"
#include "car_builder.h"
#include <iostream>
#include <vector>

using namespace std;

#define     CREATE_SUV      1
#define     CREATE_ELEC     2   
#define     CREATE_SPORT    3


class CarProgram : public MenuProgram
{
private:
    vector<Car*> cars;
    CarBuilder *builder;
public:
    void print_menu();                  
    void do_task(const int &option);    
private:
    void create_suv();  
    void create_elec();
    void create_sport();
    void quit();
    void error_message(const string &msg);
public:
    ~CarProgram();   
};

#endif