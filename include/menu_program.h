#ifndef _MENU_PROGRAM_H_
#define _MENU_PROGRAM_H_

#include <iostream>
using namespace std;

#define EXIT 0
class MenuProgram
{
public:
    void run();
protected:
    int get_option();
    virtual void print_menu() = 0; 
    virtual void do_task(const int &option) = 0; 
    virtual ~MenuProgram();
};

#endif