#ifndef FOOTBALL_GAME_ENGINE_GOALKEEPER_H
#define FOOTBALL_GAME_ENGINE_GOALKEEPER_H

#include "player.h"

/*
 * Concrete Component: GoalKeeper Class
 * This is a concrete component. Later, we will add additional responsibilities to the class as
 * and when required.
*/

class GoalKeeper : public DPlayer
{
public:
    // Constructor
    GoalKeeper(std::string s);
    // Overrides `pass_ball()` method in `DPlayer` class.
    void pass_ball();
};

#endif
