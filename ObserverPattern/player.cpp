#include <iostream>
#include "player.h"

Player::Player(Football *b, std::string n)
{
    ball = b;
    name_ = n;
}

void Player::update()
{
    ball_position = ball->get_ball_position();
    std::cout << "Player " << name_ << " says that the ball is at <" << ball_position.get_x() << ", "
              << ball_position.get_y() << ", " << ball_position.get_z() << ">" << std::endl;
}

bool Player::__eq__(IObserver *x)
{
    if (Player *r = dynamic_cast<Player *>(x)){
        return (r->name_ == name_);
    }
    return false;
}