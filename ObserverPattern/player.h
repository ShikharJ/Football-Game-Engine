#ifndef FOOTBALL_GAME_ENGINE_PLAYER_H
#define FOOTBALL_GAME_ENGINE_PLAYER_H

#include "iobserver.h"
#include "position.h"
#include "football.h"
#include <string>

class Player : public IObserver
{
private:
    Position ball_position;
    std::string name_;
    Football *ball;

public:
    Player(Football *b, std::string n);
    void update();
    bool __eq__(IObserver *x);
};

#endif
