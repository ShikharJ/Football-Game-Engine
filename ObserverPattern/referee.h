#ifndef FOOTBALL_GAME_ENGINE_REFEREE_H
#define FOOTBALL_GAME_ENGINE_REFEREE_H

#include "iobserver.h"
#include "football.h"
#include <string>

/*
 * Concrete Observer: Referee Class
 * This is an class representing the concrete observer of the
 * design pattern, i.e., the referee. `Referee` inherits from
 * `IObserver` and overrides `update()` method.
*/

class Referee : public IObserver
{
private:
    // Holds the current state (position) of the ball.
    Position ball_position;
    // Variable to store the name of the referee.
    std::string name_;
    // Pointer to the ball in the system.
    std::shared_ptr<Football> ball;

public:
    // Constructor
    Referee(std::shared_ptr<Football> b, std::string n);
    // `update()` will be called from `notify_observers()` function in the `Ball` class.
    void update();
    // Overrides the equality function in `IObserver` class.
    bool __eq__(std::shared_ptr<IObserver> x);
};

#endif
