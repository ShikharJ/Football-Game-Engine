#ifndef FOOTBALL_GAME_ENGINE_FIELDPLAYER_H
#define FOOTBALL_GAME_ENGINE_FIELDPLAYER_H

#include "player.h"

/*
 * Concrete Component: FieldPlayer Class
 * This is a concrete component. Later, we will add additional responsibilities like
 * `Forward`, `Defender` etc. to a field player.
*/

class FieldPlayer : public DPlayer
{
public:
    // Constructor
    FieldPlayer(std::string s);
    // Overrides `pass_ball()` method in `DPlayer` class.
    void pass_ball();
};

#endif
