#ifndef FOOTBALL_GAME_ENGINE_MIDFIELDER_H
#define FOOTBALL_GAME_ENGINE_MIDFIELDER_H

#include "playerrole.h"

/*
 * Concrete Decorator: MidFielder Class
 * This is a concrete implementation of the
 * `PlayerRole` class.
*/

class MidFielder : public PlayerRole
{
public:
    // This is a responsibility purely for the `MidFielder`.
    void dribble();
};

#endif
