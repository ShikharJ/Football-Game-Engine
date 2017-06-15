#ifndef FOOTBALL_GAME_ENGINE_GOALKEEPER_H
#define FOOTBALL_GAME_ENGINE_GOALKEEPER_H

#include "player.h"

class GoalKeeper : public DPlayer
{
public:
    GoalKeeper(std::string s);
    void pass_ball();
};

#endif
