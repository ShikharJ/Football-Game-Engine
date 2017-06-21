#include "engine.h"
#include "fieldplayer.h"
#include "goalkeeper.h"
#include "forward.h"
#include "midfielder.h"

DecoratorEngine::DecoratorEngine()
{
    // Creating field-players.
    std::shared_ptr<FieldPlayer> Owen = std::make_shared<FieldPlayer>("Owen");
    std::shared_ptr<FieldPlayer> Beckham = std::make_shared<FieldPlayer>("Beckham");

    // Creating a goalkeeper.
    std::shared_ptr<GoalKeeper> Khan = std::make_shared<GoalKeeper>("Khan");

    std::cout << "Warm-up session..." << std::endl;

    // Passing the ball during warm-up.
    Owen->pass_ball();
    Beckham->pass_ball();
    Khan->pass_ball();

    std::cout << std::endl << "Match is starting..." << std::endl;

    // Setting `Owen` as the first `Forward`.
    std::shared_ptr<Forward> forward1 = std::make_shared<Forward>();
    forward1->assign_player(Owen);

    // Setting `Beckham` as the first `MidFielder`.
    std::shared_ptr<MidFielder> midfielder1 = std::make_shared<MidFielder>();
    midfielder1->assign_player(Beckham);

    // `Owen` can pass as well as shoot.
    forward1->pass_ball();
    forward1->shoot_goal();

    // `Beckham` can pass as well as dribble.
    midfielder1->pass_ball();
    midfielder1->dribble();

    std::cout << std::endl << "Oops, Owen got injured..." << std::endl << "Jerrard substituting Owen..." << std::endl
              << std::endl;

    // Substituting new player as a `Forward`.
    std::shared_ptr<FieldPlayer> Jerrard = std::make_shared<FieldPlayer>("Jerrard");
    forward1->assign_player(Jerrard);
    forward1->shoot_goal();

    // Assigning `Beckham` as an extra `Forward`.
    std::shared_ptr<Forward> extraforward = std::make_shared<Forward>();
    extraforward->assign_player(Beckham);

    std::cout << std::endl << "Beckham has multiple responsibilities..." << std::endl;

    // `Beckham` has both the capabilities of a `Forward` and a `MidFielder`.
    extraforward->shoot_goal();
    midfielder1->dribble();
}

DecoratorEngine c;