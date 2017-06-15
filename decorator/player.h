#ifndef FOOTBALL_GAME_ENGINE_PLAYER_H
#define FOOTBALL_GAME_ENGINE_PLAYER_H

#include <string>
#include <iostream>

//TODO: Find a workaround for the naming issue regarding observer/player
class DPlayer
{
private:
    std::string name;

public:
    std::string get_name() const;
    void set_name(std::string s);
    virtual void pass_ball() = 0;
};

#endif
