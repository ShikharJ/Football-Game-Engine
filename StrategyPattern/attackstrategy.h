#ifndef FOOTBALL_GAME_ENGINE_ATTACKSTRATEGY_H
#define FOOTBALL_GAME_ENGINE_ATTACKSTRATEGY_H

#include "teamstrategy.h"

/*
 * Concrete Strategy: AttackStrategy Class
 * This class is a concrete implementation of the
 * strategy class.
*/

class AttackStrategy : public TeamStrategy
{
public:
    // Overrides the `play()` function in `TeamStrategy`.
    void play();
};

#endif
