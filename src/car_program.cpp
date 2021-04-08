#include "../include/car_program.h"
#include "../include/car.h"
#include "../include/car_builder.h"
#include "../include/menu_program.h"


void CarProgram::print_menu()
{   
    cout << "Car Program" << endl;
    cout << "============================" << endl;
    cout << "1. Create a suv car." << endl;
    cout << "2. Create an electric car." << endl;
    cout << "3. Create a sport car." << endl;
    cout << "0. Exit." << endl;
    cout << "============================" << endl;
}

void CarProgram::do_task(const int &option)
{
    switch (option)
    {
    case CREATE_SUV:               create_suv();             break;
    case CREATE_ELEC:              create_elec();            break;
    case CREATE_SPORT:             create_sport();           break;
    case EXIT:                     quit();                   break;

    default:                       error_message("Invalid option!");
    }
}

void CarProgram::create_suv()
{
    string car_type;
    string car_color;
    string car_engine;
    string car_name;
    string car_version;
    cout << "Create a suv car" << endl;
    Director dir;
    builder = new SuvBuilder();
    Car *s;
    s = dir.create_car(builder);
    cars.push_back(s);
    s->display();
}

void CarProgram::create_elec()
{
    string car_type;
    string car_color;
    string car_engine;
    string car_name;
    string car_version;
    cout << "Create an electric car" << endl;
    Director dir;
    ElecBuilder elec;
    Car *e;
    e = dir.create_car(&elec);
    cars.push_back(e);
    e->display();
}

void CarProgram::create_sport()
{
    string car_type;
    string car_color;
    string car_engine;
    string car_name;
    string car_version;
    cout << "Create a sport car" << endl;
    Director dir;
    SportBuilder sport;
    Car *sp;
    sp = dir.create_car(&sport);
    cars.push_back(sp);
    sp->display();
}

void CarProgram::quit()
{
    cout << "Quit!" << endl;
}

void CarProgram::error_message(const string &msg)
{
    cout << msg << endl;
}

MenuProgram::~MenuProgram()
{

}

CarProgram::~CarProgram()
{
    for (int i = 0; i < cars.size(); i++)
    {
        delete cars[i];
    }
}