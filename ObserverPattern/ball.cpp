#include <algorithm>
#include "ball.h"

void Ball::attach_observer(std::shared_ptr<IObserver> x)
{
    i_.push_back(x);
}

void Ball::detach_observer(std::shared_ptr<IObserver> x)
{
    i_.erase(std::remove_if(i_.begin(), i_.end(), [&](std::shared_ptr<IObserver> e) { return e->__eq__(x); }), i_.end());
}

void Ball::notify_observers()
{
    for (auto &v : i_) {
        v->update();
    }
}