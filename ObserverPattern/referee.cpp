#include <iostream>
#include "referee.h"

Referee::Referee(std::shared_ptr<Football> b, std::string n)
{
    ball = b;
    name_ = n;
}

void Referee::update()
{
    ball_position = ball->get_ball_position();
    std::cout << "Referee " << name_ << " says that the ball is at <" << ball_position.get_x() << ", "
              << ball_position.get_y() << ", " << ball_position.get_z() << ">" << std::endl;
}

bool Referee::__eq__(std::shared_ptr<IObserver> x)
{
    std::shared_ptr<Referee> r = std::static_pointer_cast<Referee>(x);
    return (r->name_ == name_);
}