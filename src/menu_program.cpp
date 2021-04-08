#include "../include/menu_program.h"

void MenuProgram::run()
{
    bool running = true;

    while (running)
    {
        print_menu();
        int opt = get_option();
        do_task(opt);

        if (opt == EXIT) running = false;
    }
}

int MenuProgram::get_option()
{
    cout << "Your choice: ";
    int opt;
    cin >> opt;
    return opt;
}