#ifndef FOOTBALL_GAME_ENGINE_DEFENDSTRATEGY_H
#define FOOTBALL_GAME_ENGINE_DEFENDSTRATEGY_H

#include "teamstrategy.h"

/*
 * Concrete Strategy: DefendStrategy Class
 * This class is a concrete implementation of the
 * strategy class.
*/

class DefendStrategy : public TeamStrategy
{
public:
    // Overrides the `play()` function in `TeamStrategy`.
    void play();
};

#endif
