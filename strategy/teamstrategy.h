#ifndef FOOTBALL_GAME_ENGINE_TEAMSTRATEGY_H
#define FOOTBALL_GAME_ENGINE_TEAMSTRATEGY_H

/*
 * TeamStrategy Class
 * This is an abstract base class for the entire strategy
 * pattern, with a pure virtual method for altering the game
 * strategy, irrespective of the client players.
*/

class TeamStrategy
{
public:
    virtual void play() = 0;
};

#endif
