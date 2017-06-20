#include <iostream>
#include "engine.h"
#include "football.h"
#include "player.h"
#include "referee.h"

ObserverEngine::ObserverEngine()
{
    // Creating the Concrete Subject.
    Football *ball = new Football;

    // Creating the Concrete Observers.
    Player *Owen = new Player(ball, "Owen");
    Player *Ronaldo = new Player(ball, "Ronaldo");
    Player *Rivaldo = new Player(ball, "Rivaldo");
    Referee *Mike = new Referee(ball, "Mike");
    Referee *John = new Referee(ball, "John");

    // Attaching the observers with the ball.
    ball->attach_observer(Owen);
    ball->attach_observer(Ronaldo);
    ball->attach_observer(Rivaldo);
    ball->attach_observer(Mike);
    ball->attach_observer(John);

    std::cout << "Attaching the observers..." << std::endl;

    // Updating the position of the ball.
    ball->set_ball_position(new Position(5, 6, 9));
    std::cout << std::endl;

    // Removing some observers.
    ball->detach_observer(Owen);
    ball->detach_observer(John);

    std::cout << "After detaching Owen and John..." << std::endl;

    // All the observers should be notified automatically.
    ball->set_ball_position(new Position(3, 5, 6));
    std::cout << std::endl;
}

ObserverEngine a;