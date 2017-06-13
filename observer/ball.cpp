#include "ball.h"

void Ball::notify_observers()
{
    for (auto &v : i_) {
        v.update();
    }
}