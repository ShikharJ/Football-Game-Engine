#ifndef FOOTBALL_GAME_ENGINE_POSITION_H
#define FOOTBALL_GAME_ENGINE_POSITION_H

/*
 * Position Class
 * This is an class keeping hold of the current position
 * of various entities such as ball, or the player, as
 * integral coordinates along the x, y and z axes.
*/

class Position
{
private:
    int x_;
    int y_;
    int z_;

public:
    Position();
    Position(int x, int y, int z);
};

#endif
