#ifndef TEAM_HPP
#define TEAM_HPP
#include "Character.hpp"
#include "cowboy.hpp"
#include "Ninja.hpp"
#include "point.hpp"
#include <vector>
namespace ariel{
    class Team
    {
        private:
            vector<Character*> cowboys;//<=10
            Character* leader;
        public:
            Team(Character* leader);
            ~Team();
            void add(Character* NewMember);
            int stillAlive();
            void attack(Team* leader);
            void print();
    };
}
#endif