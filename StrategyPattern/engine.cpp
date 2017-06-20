#include <iostream>
#include "engine.h"
#include "attackstrategy.h"
#include "defendstrategy.h"
#include "team.h"

StrategyEngine::StrategyEngine()
{
    // Creating strategies.
    AttackStrategy *attack = new AttackStrategy;
    DefendStrategy *defend = new DefendStrategy;

    // Creating teams.
    Team *France = new Team("France");
    Team *Italy = new Team("Italy");

    std::cout << "Setting the strategies..." << std::endl;

    // Setting the strategies.
    France->set_strategy(attack);
    Italy->set_strategy(defend);

    // Commencing the game.
    France->play_game();
    Italy->play_game();

    std::cout << std::endl << "Changing the strategies..." << std::endl;

    // Changing the strategies as per need.
    France->set_strategy(defend);
    Italy->set_strategy(attack);

    // Commencing the game once more.
    France->play_game();
    Italy->play_game();
    std::cout << std::endl;
}

StrategyEngine b;