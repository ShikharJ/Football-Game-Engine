#ifndef FOOTBALL_GAME_ENGINE_PLAYER_H
#define FOOTBALL_GAME_ENGINE_PLAYER_H

#include "iobserver.h"
#include "position.h"
#include "football.h"
#include <string>

/*
 * Concrete Observer: Player Class
 * This is an class representing the concrete observer of the
 * design pattern, i.e., the player. `Player` inherits from
 * `IObserver` and overrides `update()` method.
*/

class Player : public IObserver
{
private:
    // Holds the current state (position) of the ball.
    Position ball_position;
    // Variable to store the name of the player.
    std::string name_;
    // Pointer to the ball in the system.
    Football *ball;

public:
    // Constructor
    Player(Football *b, std::string n);
    // `update()` will be called from `notify_observers()` function in the `Ball` class.
    void update();
    // Overrides the equality function in `IObserver` class.
    bool __eq__(IObserver *x);
};

#endif
