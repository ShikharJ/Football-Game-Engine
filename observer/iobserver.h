#ifndef FOOTBALL_GAME_ENGINE_IOBSERVER_H
#define FOOTBALL_GAME_ENGINE_IOBSERVER_H

/*
 * IObserver Class
 * This is an abstract base class for the entire observer
 * pattern, with a pure virtual method for updating the
 * child classes.
*/

class IObserver
{
public:
    virtual void update() const = 0;
};

#endif
