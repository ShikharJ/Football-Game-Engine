#ifndef FOOTBALL_GAME_ENGINE_FOOTBALL_H
#define FOOTBALL_GAME_ENGINE_FOOTBALL_H

#include "ball.h"
#include "position.h"

/*
 * Concrete Subject: Football Class
 * This is an class representing the concrete subject of the
 * design pattern, i.e., the football. Methods `get_ball_position()`
 * and `set_ball_position()` are used for notification and updation
 * purposes.
*/

class Football : public Ball
{
private:
    // State: The position of the ball.
    Position ball_position;

public:
    // This function will be called by the observers to get the ball position.
    Position get_ball_position() const;
    // Some external client will call this to set the ball position.
    void set_ball_position(std::shared_ptr<Position> p);
};

#endif
