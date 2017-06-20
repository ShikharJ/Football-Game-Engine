#include <algorithm>
#include "ball.h"
#include "player.h"

void Ball::attach_observer(IObserver *x)
{
    i_.push_back(x);
}

void Ball::detach_observer(IObserver *x)
{
    i_.erase(std::remove_if(i_.begin(), i_.end(), [&](IObserver *e) { return e->__eq__(x); }), i_.end());
}

void Ball::notify_observers()
{
    for (auto &v : i_) {
        v->update();
    }
}