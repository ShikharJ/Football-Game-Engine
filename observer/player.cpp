#include <iostream>
#include "player.h"

Player::Player(Football &b, std::string n)
{
    ball = &b;
    name = n;
}

void Player::update()
{
    ball_position = ball->get_ball_position();
    std::cout << "Player " << name << " says that the ball is at " << ball_position.get_x() << ", "
              << ball_position.get_y() << ", " << ball_position.get_z() << std::endl;
}