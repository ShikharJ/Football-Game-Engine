#include <iostream>
#include "engine.h"
#include "football.h"
#include "player.h"
#include "referee.h"

ObserverEngine::ObserverEngine()
{
    Football *ball = new Football;

    Player *Owen = new Player(ball, "Owen");
    Player *Ronaldo = new Player(ball, "Ronaldo");
    Player *Rivaldo = new Player(ball, "Rivaldo");

    Referee *Mike = new Referee(ball, "Mike");
    Referee *John = new Referee(ball, "John");

    ball->attach_observer(Owen);
    ball->attach_observer(Ronaldo);
    ball->attach_observer(Rivaldo);
    ball->attach_observer(Mike);
    ball->attach_observer(John);

    std::cout << "Attaching the observers..." << std::endl;

    ball->set_ball_position(new Position(5, 6, 9));

    std::cout << std::endl;

    ball->detach_observer(Owen);
    ball->detach_observer(John);

    std::cout << "After detaching Owen and John..." << std::endl;

    ball->set_ball_position(new Position(3, 5, 6));
}

ObserverEngine e;