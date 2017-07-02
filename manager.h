#ifndef FOOTBALL_GAME_ENGINE_MANAGER_H
#define FOOTBALL_GAME_ENGINE_MANAGER_H

#include <string>
#include <map>
#include <vector>

/*
 * Manager Class
 * This is required for running the entire pattern simulation.
*/

class Manager
{
private:
    std::string match_report;
    std::string home_team;
    std::string away_team;
    std::map<std::string, double> home_strength;
    std::map<std::string, double> away_strength;
    std::map<std::string, std::vector<unsigned>> tactics;
    std::map<std::string, int> goals;
    std::map<std::string, int> fouls;
    std::map<std::string, int> yellow_cards;
    std::map<std::string, int> red_cards;
    std::map<std::string, int> offsides;
    std::map<std::string, int> shots;

public:
    // Constructor
    Manager();
    double tactics_weight(unsigned val);
    double strength_weight(unsigned val);
    bool percentage_chance(unsigned chance, unsigned universe = 100);
    bool simulate_attack(std::string &attack_team, std::string &defense_team,
                         std::map<std::string, double> &attack_strength, std::map<std::string, double> &defense_strength,
                         int minute);
    void run_simulation(int minute);
};

#endif
