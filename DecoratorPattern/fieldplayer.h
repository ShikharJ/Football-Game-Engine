#ifndef FOOTBALL_GAME_ENGINE_FIELDPLAYER_H
#define FOOTBALL_GAME_ENGINE_FIELDPLAYER_H

#include "player.h"

class FieldPlayer : public DPlayer
{
public:
    FieldPlayer(std::string s);
    void pass_ball();
};

#endif
