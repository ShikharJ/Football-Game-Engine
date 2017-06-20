#include "football.h"

Position Football::get_ball_position() const
{
    return ball_position;
}

void Football::set_ball_position(Position *p)
{
    ball_position = *p;
    notify_observers();
}
