#include "manager.h"
#include <iostream>
#include <algorithm>
#include <cmath>
#include <ctime>


Manager::Manager()
{
    match_report = "\nThe Match Has Begun!\n";
    home_team = "Barcelona";
    away_team = "Manchester United";

    home_strength.insert(std::make_pair<std::string, double>("Forwards", 1));
    home_strength.insert(std::make_pair<std::string, double>("Defenders", 1));
    home_strength.insert(std::make_pair<std::string, double>("GoalKeepers", 2));

    away_strength.insert(std::make_pair<std::string, double>("Forwards", 2));
    away_strength.insert(std::make_pair<std::string, double>("Defenders", 2));
    away_strength.insert(std::make_pair<std::string, double>("GoalKeepers", 3));

    tactics.insert(std::make_pair<std::string, double>(std::move(home_team), 2));
    tactics.insert(std::make_pair<std::string, double>(std::move(away_team), 2));

    goals.insert(std::make_pair<std::string, int>(std::move(home_team), 0));
    goals.insert(std::make_pair<std::string, int>(std::move(away_team), 0));

    fouls.insert(std::make_pair<std::string, int>(std::move(home_team), 0));
    fouls.insert(std::make_pair<std::string, int>(std::move(away_team), 0));

    yellow_cards.insert(std::make_pair<std::string, int>(std::move(home_team), 0));
    yellow_cards.insert(std::make_pair<std::string, int>(std::move(away_team), 0));

    red_cards.insert(std::make_pair<std::string, int>(std::move(home_team), 0));
    red_cards.insert(std::make_pair<std::string, int>(std::move(away_team), 0));

    offsides.insert(std::make_pair<std::string, int>(std::move(home_team), 0));
    offsides.insert(std::make_pair<std::string, int>(std::move(away_team), 0));

    shots.insert(std::make_pair<std::string, int>(std::move(home_team), 0));
    shots.insert(std::make_pair<std::string, int>(std::move(away_team), 0));
}

double Manager::tactics_weight(double val)
{
    double new_val = ((val * 0.1) + 0.8);
    return new_val;
}

double Manager::strength_weight(double val)
{
    double new_val = (log10(val + 1) + 0.35);
    return new_val;
}

bool Manager::percentage_chance(unsigned chance)
{
    int num = rand() % 38;
    if (num <= chance){
        return true;
    }
    return false;
}

bool Manager::simulate_attack(std::string &attack_team, std::string &defense_team,
                              std::map<std::string, double> &attack_strength,
                              std::map<std::string, double> &defense_strength, int minute)
{
    match_report = match_report + " Minute " + std::to_string(minute) + ": " + attack_team + " attacks!\n";
    double offense_strength = static_cast<double>(attack_strength["Forwards"]) / defense_strength["Defenders"];
    double defending_strength = static_cast<double>(defense_strength["Defenders"]) / attack_strength["Forwards"];
    if (percentage_chance(50 * offense_strength * tactics_weight(tactics[attack_team])
                          / tactics_weight(tactics[attack_team]))) {
        match_report = match_report + " " + defense_team + " advances!\n";
        if (percentage_chance(25 * tactics_weight(tactics[defense_team]))) {
            fouls[defense_team] += 1;
            match_report = match_report + " " + defense_team + " fouls!\n";
            if (percentage_chance(43)) {
                yellow_cards[defense_team] += 1;
                match_report = match_report + " " + defense_team + " gets a yellow card!\n";
            } else if (percentage_chance(3)) {
                red_cards[defense_team] += 1;
                match_report = match_report + " " + defense_team + " gets a red card!\n";
            }
            match_report = match_report + " " + attack_team + " gets an indirect free kick!\n";
            if (percentage_chance(25 * strength_weight(attack_strength["Forwards"]))) {
                shots[attack_team] += 1;
                match_report = match_report + " " + attack_team + " takes a shot at the goal!\n";
                if (percentage_chance(25 / strength_weight(defense_strength["GoalKeepers"]))) {
                    goals[attack_team] += 1;
                    match_report = match_report + " " + attack_team + " shoot a goal!\n";
                } else {
                    match_report = match_report + " " + defense_team + "save the shot!\n";
                }
            } else {
                match_report = match_report + " " + defense_team + " clear the free kick!\n";
            }
        } else if (percentage_chance(17 * tactics_weight(tactics[attack_team]))) {
            offsides[attack_team] += 1;
            match_report = match_report + " " + defense_team + " commits an offside!\n";
        } else {
            match_report = match_report + " " + defense_team + " advance further!\n";
            if (percentage_chance(25 * tactics_weight(tactics[defense_team]))) {
                fouls[defense_team] += 1;
                match_report = match_report + " " + defense_team + " fouls!\n";
                if (percentage_chance(43)) {
                    yellow_cards[defense_team] += 1;
                    match_report = match_report + " " + defense_team + " gets a yellow card!\n";
                } else if (percentage_chance(3)) {
                    red_cards[defense_team] += 1;
                    match_report = match_report + " " + defense_team + " gets a red card!\n";
                }
                if (percentage_chance(19)) {
                    shots[attack_team] += 1;
                    match_report = match_report + " " + attack_team + " get a penalty shoot!\n";
                    if (percentage_chance(77)) {
                        goals[attack_team] += 1;
                        match_report = match_report + " " + attack_team + " shoot a goal!\n";
                    } else if (percentage_chance(50)) {
                        match_report = match_report + " " + attack_team + " miss the penalty!\n";
                    } else {
                        match_report = match_report + " " + defense_team + " save the penalty!\n";
                    }
                } else {
                    match_report = match_report + " " + attack_team + " gets a direct free kick!\n";
                    if (percentage_chance(33 * strength_weight(attack_strength["Forwards"]))) {
                        shots[attack_team] += 1;
                        match_report = match_report + " " + attack_team + " takes a shot at the goal!\n";
                        if (percentage_chance(33 / strength_weight(defense_strength["GoalKeepers"]))) {
                            goals[attack_team] += 1;
                            match_report = match_report + " " + attack_team + " shoot a goal!\n";
                        } else {
                            match_report = match_report + " " + defense_team + " save the shot!\n";
                        }
                    } else {
                        match_report = match_report + " " + defense_team + " clear the free kick!\n";
                    }
                }
            } else if (percentage_chance(62 * strength_weight(attack_strength["Forwards"]) *
                                         tactics_weight(tactics[attack_team]) *
                                         tactics_weight(tactics[attack_team]))) {
                shots[attack_team] += 1;
                match_report = match_report + " " + attack_team + "shoots!\n";
                if (percentage_chance(30 / strength_weight(defense_strength["GoalKeepers"]))) {
                    goals[attack_team] += 1;
                    match_report = match_report + " " + attack_team + " shoot a goal!\n";
                } else {
                    if (percentage_chance(50)) {
                        match_report = match_report + " " + defense_team + " block the shot!\n";
                    } else {
                        match_report = match_report + " " + defense_team + " save the shot!\n";
                    }
                }
            } else {
                match_report = match_report + " " + defense_team + " stopped the attack!\n";
                if (percentage_chance(15 * defending_strength * tactics_weight(tactics[attack_team]) *
                                      tactics_weight(tactics[attack_team]) *
                                      tactics_weight(tactics[defense_team]))) {
                    attack_strength["Defenders"] = attack_strength["Defenders"] * 0.8;
                    match_report = match_report + " " + defense_team + " launches a quick counter attack!\n";
                    match_report = match_report + " " + "Goals- " + attack_team + " - " +
                                   std::to_string(goals[attack_team]) + " : " + defense_team + " - " +
                                   std::to_string(goals[defense_team]) + "\n";
                    simulate_attack(defense_team, attack_team, defense_strength, attack_strength, minute);
                }
            }
        }
    } else if (percentage_chance(15 * defending_strength * tactics_weight(tactics[attack_team]) *
                                 tactics_weight(tactics[attack_team]) * tactics_weight(tactics[defense_team]))) {
        match_report = match_report + " " + defense_team + " stopped the attack!\n";
        attack_strength["Defenders"] = attack_strength["Defenders"] * 0.8;
        match_report = match_report + " " + defense_team + " launches a quick counter attack!\n";
        match_report = match_report + " " + "Goals- " + attack_team + " - " + std::to_string(goals[attack_team]) + " : "
                       + defense_team + " - " + std::to_string(goals[defense_team]) + "\n";
        simulate_attack(defense_team, attack_team, defense_strength, attack_strength, minute);
    } else {
        match_report = match_report + " " + defense_team + " have a thrown-in\n";
        if (percentage_chance(33)) {
            if (percentage_chance(50)) {
                match_report = match_report + " " + defense_team + " have a thrown-in attack!\n";
                match_report = match_report + " " + "Goals- " + attack_team + " - " + std::to_string(goals[attack_team])
                               + " : " + defense_team + " - " + std::to_string(goals[defense_team]) + "\n";
                simulate_attack(attack_team, defense_team, attack_strength, defense_strength, minute);
            } else {
                match_report = match_report + " " + defense_team + " have a thrown-in defense!\n";
                match_report = match_report + " " + "Goals- " + attack_team + " - " + std::to_string(goals[attack_team])
                               + " : " + defense_team + " - " + std::to_string(goals[defense_team]) + "\n";
                simulate_attack(defense_team, attack_team, defense_strength, attack_strength, minute);
            }
        }
    }
    match_report = match_report + " " + "Goals- " + attack_team + " - " + std::to_string(goals[attack_team]) + " : " +
                   defense_team + " - " + std::to_string(goals[defense_team]) + "\n";
    return true;
}

void Manager::run_simulation(std::string home, std::string away, int minute)
{
    for (int i = minute; i < 92; i++){
        home_team = home;
        away_team = away;
        simulate_attack(home_team, away_team, home_strength, away_strength, i);
    }
    std::cout << match_report << std::endl;
}
