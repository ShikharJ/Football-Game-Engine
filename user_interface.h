#ifndef FOOTBALL_GAME_ENGINE_USER_INTERFACE_H
#define FOOTBALL_GAME_ENGINE_USER_INTERFACE_H

#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <cstdio>
#include <fstream>

using namespace std;

class UserInterface
{
    char option_;

public:
    UserInterface();
    void clear();
    void show_main_menu();
    void show_about();
    void encrypt();
    void decrypt();
    void print_screen(string s);
};

#endif
