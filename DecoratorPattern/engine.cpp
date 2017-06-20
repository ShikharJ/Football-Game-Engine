#include "engine.h"
#include "fieldplayer.h"
#include "goalkeeper.h"
#include "forward.h"
#include "midfielder.h"

DecoratorEngine::DecoratorEngine()
{
    FieldPlayer *Owen = new FieldPlayer("Owen");
    FieldPlayer *Beckham = new FieldPlayer("Beckham");

    GoalKeeper *Khan = new GoalKeeper("Khan");

    std::cout << "Warm-up session..." << std::endl;

    Owen->pass_ball();
    Beckham->pass_ball();
    Khan->pass_ball();

    std::cout << "Match is starting..." << std::endl;

    Forward *forward1 = new Forward;
    forward1->assign_player(Owen);

    MidFielder *midfielder1 = new MidFielder;
    midfielder1->assign_player(Beckham);

    forward1->pass_ball();
    forward1->shoot_goal();

    midfielder1->pass_ball();
    midfielder1->dribble();

    std::cout << "Oops, Owen got injured..." << std::endl << "Jerrard substituting Owen..." << std::endl;

    FieldPlayer *Jerrard = new FieldPlayer("Jerrard");

    forward1->assign_player(Jerrard);
    forward1->shoot_goal();

    Forward *extraforward = new Forward;
    extraforward->assign_player(Beckham);

    std::cout << "Beckham has multiple responsibilities..." << std::endl;

    extraforward->shoot_goal();
    midfielder1->dribble();
}

DecoratorEngine c;