#ifndef TEAM_HPP
#define TEAM_HPP
#include "LeaderTeam.hpp"
#include <vector>
namespace ariel{
    class Team:public LeaderTeam
    {
        public:
            Team(Character* leader):LeaderTeam(leader){}
            ~Team();
            void attack(Team* team) override;
    };

    class Team2:public LeaderTeam
    {
        public:
            Team2(Character* leader):LeaderTeam(leader){}
            ~Team2();
            void attack(Team* team) override;

    };
    class SmartTeam:public LeaderTeam
    {
        public:
            SmartTeam(Character* leader):LeaderTeam(leader){}
            ~SmartTeam();
            void attack(Team* team) override;

    };
}
#endif