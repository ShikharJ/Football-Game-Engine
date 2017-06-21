#ifndef FOOTBALL_GAME_ENGINE_TEAM_H
#define FOOTBALL_GAME_ENGINE_TEAM_H

#include <string>
#include "teamstrategy.h"

/*
 * Context: Team Class
 * This class encapsulates the entire strategy pattern.
*/

class Team
{
private:
    // Variable to store the name of the team.
    std::string team_name;
    // Pointer to the strategy algorithm to use.
    std::shared_ptr<TeamStrategy> strategy;

public:
    // Constructor
    Team(std::string team);
    // Context interface to set the strategy.
    void set_strategy(std::shared_ptr<TeamStrategy> s);
    // Method to commence playing.
    void play_game();
};

#endif
