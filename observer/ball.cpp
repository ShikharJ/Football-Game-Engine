#include "ball.h"

void Ball::notify_observers() const
{
    for (auto &v : i_) {
        v.update();
    }
}