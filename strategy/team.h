#ifndef FOOTBALL_GAME_ENGINE_TEAM_H
#define FOOTBALL_GAME_ENGINE_TEAM_H

#include <string>
#include "teamstrategy.h"

class Team
{
private:
    std::string team_name;
    TeamStrategy *strategy;

public:
    Team(std::string team);
    void set_strategy(TeamStrategy *s);
    void play_game();
};

#endif
