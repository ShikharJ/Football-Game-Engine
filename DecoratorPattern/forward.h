#ifndef FOOTBALL_GAME_ENGINE_FORWARD_H
#define FOOTBALL_GAME_ENGINE_FORWARD_H

#include "playerrole.h"

/*
 * Concrete Decorator: Forward Class
 * This is a concrete implementation of the
 * `PlayerRole` class.
*/

class Forward : public PlayerRole
{
public:
    // This is a responsibility purely for the `Forward`.
    void shoot_goal();
};

#endif
