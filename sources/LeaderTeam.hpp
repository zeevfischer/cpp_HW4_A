#ifndef LEADERTEAM_HPP
#define LEADERTEAM_HPP
#include "Character.hpp"
#include "cowboy.hpp"
#include "Ninja.hpp"
#include "point.hpp"
#include <vector>
namespace ariel
{
    class LeaderTeam
    {
        private:
            vector<Character*> members;//<=10
            Character* leader;
        public:
            LeaderTeam(Character* leader);
            ~LeaderTeam();
            void add(Character* NewMember);
            int stillAlive();
            void attack(Team* team);
            void print();
    };
}
#endif