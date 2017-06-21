#ifndef FOOTBALL_GAME_ENGINE_PLAYERROLE_H
#define FOOTBALL_GAME_ENGINE_PLAYERROLE_H

#include "player.h"

/*
 * Decorator: PlayerRole Class
 * This encapsulates the entire decorator pattern.
*/

class PlayerRole : public DPlayer
{
protected:
    // Pointer to the player.
    std::shared_ptr<DPlayer> player;

public:
    // Overrides `pass_ball()` method in `DPlayer` class.
    void pass_ball();
    // Assigns a player to this role.
    void assign_player(std::shared_ptr<DPlayer> p);
};

#endif
