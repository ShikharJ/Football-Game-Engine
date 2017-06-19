#include "position.h"

Position::Position() : x(0), y(0), z(0)
{
}

Position::Position(int x, int y, int z) : x(x), y(y), z(z)
{
}

Position::Position(const Position &p)
{
    *this = p;
}

Position& Position::operator=(const Position &p)
{
    x = p.x;
    y = p.y;
    z = p.z;
}

int Position::get_x() const
{
    return x;
}

int Position::get_y() const
{
    return y;
}

int Position::get_z() const
{
    return z;
}
