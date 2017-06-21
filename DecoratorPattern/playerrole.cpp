#include "playerrole.h"

void PlayerRole::pass_ball()
{
    player->pass_ball();
}

void PlayerRole::assign_player(std::shared_ptr<DPlayer> p)
{
    player = p;
}