#ifndef FOOTBALL_GAME_ENGINE_FOOTBALL_H
#define FOOTBALL_GAME_ENGINE_FOOTBALL_H

#include "ball.h"
#include "position.h"

class Football : public Ball
{
private:
    Position ball_position;

public:
    Position get_ball_position() const;
    void set_ball_position(Position *p);
};

#endif
