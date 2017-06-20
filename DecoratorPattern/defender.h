#ifndef FOOTBALL_GAME_ENGINE_DEFENDER_H
#define FOOTBALL_GAME_ENGINE_DEFENDER_H

#include "playerrole.h"

/*
 * Concrete Decorator: Defender Class
 * This is a concrete implementation of the
 * `PlayerRole` class.
*/

class Defender : public PlayerRole
{
public:
    // This is a responsibility purely for the `Defender`.
    void defend();
};

#endif
