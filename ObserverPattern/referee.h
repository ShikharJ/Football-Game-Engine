#ifndef FOOTBALL_GAME_ENGINE_REFEREE_H
#define FOOTBALL_GAME_ENGINE_REFEREE_H

#include "iobserver.h"
#include "football.h"
#include <string>

class Referee : public IObserver
{
private:
    Position ball_position;
    std::string name;
    Football *ball;

public:
    Referee(Football &b, std::string n);
    void update();
    bool is_player();
};

#endif
