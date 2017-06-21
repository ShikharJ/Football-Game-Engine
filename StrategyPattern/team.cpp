#include <iostream>
#include "team.h"

Team::Team(std::string team)
{
    team_name = team;
}

void Team::set_strategy(std::shared_ptr<TeamStrategy> s)
{
    strategy = s;
}

void Team::play_game()
{
    std::cout << team_name << " ";
    strategy->play();
}
