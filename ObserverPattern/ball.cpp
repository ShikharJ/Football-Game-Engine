#include "ball.h"

void Ball::attach_observer()
{
    //TODO: Implement
}

void Ball::detach_observer()
{
    //TODO: Implement
}

void Ball::notify_observers()
{
    for (auto &v : i_) {
        v.update();
    }
}