#ifndef FOOTBALL_GAME_ENGINE_PLAYERROLE_H
#define FOOTBALL_GAME_ENGINE_PLAYERROLE_H

#include "player.h"

class PlayerRole : public DPlayer
{
protected:
    DPlayer *player;

public:
    void pass_ball();
    void assign_player(DPlayer *p);
};

#endif
