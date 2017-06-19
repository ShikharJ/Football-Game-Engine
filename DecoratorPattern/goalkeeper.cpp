#include "goalkeeper.h"

GoalKeeper::GoalKeeper(std::string s)
{
    this->set_name(s);
}

void GoalKeeper::pass_ball()
{
    std::cout << "GoalKeeper " << this->get_name() << " passed the ball." << std::endl;
}
