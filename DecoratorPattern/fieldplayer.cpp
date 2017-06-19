#include "fieldplayer.h"

FieldPlayer::FieldPlayer(std::string s)
{
    this->set_name(s);
}

void FieldPlayer::pass_ball()
{
    std::cout << "Fieldplayer " << this->get_name() << " passed the ball." << std::endl;
}
