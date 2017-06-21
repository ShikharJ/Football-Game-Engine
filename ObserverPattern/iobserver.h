#ifndef FOOTBALL_GAME_ENGINE_IOBSERVER_H
#define FOOTBALL_GAME_ENGINE_IOBSERVER_H

#include <memory>

/*
 * Observer: IObserver Class
 * This is an abstract base class for the entire observer
 * pattern, with a pure virtual method for updating the
 * child classes.
*/

class IObserver
{
public:
    // Must override method for updation.
    virtual void update() = 0;
    // For comparing different objects for equality.
    virtual bool __eq__(std::shared_ptr<IObserver> x) = 0;
};

#endif
