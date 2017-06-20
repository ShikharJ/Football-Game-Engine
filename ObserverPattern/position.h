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
    int x;
    int y;
    int z;

public:
    // Default Constructor
    Position();
    // Constructor
    Position(int x, int y, int z);
    // Copy-Constructor
    Position(const Position &p);
    // Assignment operator overloading
    Position &operator=(const Position &p);
    // returns the x-coordinate
    int get_x() const;
    // returns the y-coordinate
    int get_y() const;
    // returns the z-
    int get_z() const;
};

#endif
