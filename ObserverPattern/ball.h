#ifndef FOOTBALL_GAME_ENGINE_BALL_H
#define FOOTBALL_GAME_ENGINE_BALL_H

#include "iobserver.h"
#include <vector>

/*
 * Subject: Ball Class
 * This is an class representing the subject of the design
 * pattern, i.e., the ball. Methods `attach_observer()` and
 * `detach_observer()` are used to append and remove
 * `IObserver`-based objects from the list of objects
 * to be updated/notified of the changes through the
 * `notify_observers()` method.
*/

class Ball
{
private:
    // A private list of observers.
    std::vector<std::shared_ptr<IObserver>> i_;

public:
    // Routine to attach an observer.
    void attach_observer(std::shared_ptr<IObserver>);
    // Routine to remove an observer.
    void detach_observer(std::shared_ptr<IObserver>);
    // Routine to notify the observers.
    void notify_observers();
};

#endif
