#ifndef FOOTBALL_GAME_ENGINE_PLAYER_H
#define FOOTBALL_GAME_ENGINE_PLAYER_H

#include <string>
#include <iostream>

/*
 * Component: Player Class
 * This is an abstract class representing the component of the
 * decorator pattern, i.e., the player.
*/

class DPlayer
{
private:
    // Variable to store the name of the player.
    std::string name;

public:
    // Returns the name of the player.
    std::string get_name() const;
    // Sets the name of the player.
    void set_name(std::string s);
    // Must override function for concrete components
    virtual void pass_ball() = 0;
};

#endif
