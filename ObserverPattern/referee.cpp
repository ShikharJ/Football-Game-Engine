#include <iostream>
#include "referee.h"

Referee::Referee(Football *b, std::string n)
{
    ball = b;
    name_ = n;
}

void Referee::update()
{
    ball_position = ball->get_ball_position();
    std::cout << "Player " << name_ << " says that the ball is at " << ball_position.get_x() << ", "
              << ball_position.get_y() << ", " << ball_position.get_z() << std::endl;
}

bool Referee::__eq__(IObserver *x)
{
    if (Referee *r = dynamic_cast<Referee *>(x)){
        return (r->name_ == name_);
    }
    return false;
}