#include <iostream>
#include "engine.h"
#include "attackstrategy.h"
#include "defendstrategy.h"
#include "team.h"

StrategyEngine::StrategyEngine()
{
    AttackStrategy *attack = new AttackStrategy;
    DefendStrategy *defend = new DefendStrategy;

    Team *France = new Team("France");
    Team *Italy = new Team("Italy");

    std::cout << "Setting the strategies..." << std::endl;

    France->set_strategy(attack);
    Italy->set_strategy(defend);

    France->play_game();
    Italy->play_game();

    std::cout << "Changing the strategies..." << std::endl;

    France->set_strategy(defend);
    Italy->set_strategy(attack);

    France->play_game();
    Italy->play_game();
}

StrategyEngine a;