#include <iostream>
#include "engine.h"
#include "football.h"
#include "player.h"
#include "referee.h"

ObserverEngine::ObserverEngine()
{
    // Creating the Concrete Subject.
    std::shared_ptr<Football> ball = std::make_shared<Football>();

    // Creating the Concrete Observers.
    std::shared_ptr<Player> Owen = std::make_shared<Player>(ball, "Owen");
    std::shared_ptr<Player> Ronaldo = std::make_shared<Player>(ball, "Ronaldo");
    std::shared_ptr<Player> Rivaldo = std::make_shared<Player>(ball, "Rivaldo");
    std::shared_ptr<Referee> Mike = std::make_shared<Referee>(ball, "Mike");
    std::shared_ptr<Referee> John = std::make_shared<Referee>(ball, "John");

    // Attaching the observers with the ball.
    ball->attach_observer(Owen);
    ball->attach_observer(Ronaldo);
    ball->attach_observer(Rivaldo);
    ball->attach_observer(Mike);
    ball->attach_observer(John);

    std::cout << "Attaching the observers..." << std::endl;

    // Updating the position of the ball.
    ball->set_ball_position(std::make_shared<Position>(5, 6, 9));
    std::cout << std::endl;

    // Removing some observers.
    ball->detach_observer(Owen);
    ball->detach_observer(John);

    std::cout << "After detaching Owen and John..." << std::endl;

    // All the observers should be notified automatically.
    ball->set_ball_position(std::make_shared<Position>(3, 5, 6));
    std::cout << std::endl;
}

ObserverEngine a;