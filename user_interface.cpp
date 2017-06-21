#include "user_interface.h"

using namespace std;

UserInterface::UserInterface()
{
    string s = "files/main_screen.bin";
    print_screen(s);
    char ch;
    ch = getchar();
}

void UserInterface::clear()
{
    for (int i = 0; i < 10; i++){
        cout<<"\n\n\n";
    }
}

void UserInterface::show_main_menu()
{
    string s = "files/main_menu.bin";
    print_screen(s);

    do
    {
        option_ = getchar();
    } while (!(option_ != '1' or option_ != '2' or option_ != '3'));

    switch (option_)
    {
        case '1' : start_game();
            break;
        case '2' : show_about();
            break;
        case '3' : exit(0);
        default : cout << "\nUnexpected Error!\n";
    }
    show_main_menu();
}

void UserInterface::show_about()
{
    string s = "files/about.bin";
    print_screen(s);

    do
    {
        option_ = getchar();
    } while (option_ != '1');

    show_main_menu();
}

void UserInterface::encrypt()
{

}

void UserInterface::decrypt()
{

}

void UserInterface::print_screen(string s)
{
    clear();
    ifstream fin;
    fin.open(s, ios_base::in);
    char ch;

    while (fin.read(&ch, sizeof(ch)))
    {
        cout << ch;
    }

    fin.close();
}