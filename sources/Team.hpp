#include "cowboy.hpp"
#include "Ninja.hpp"
#include "Character.hpp"
#include "baseTeam.hpp"
#include <vector>
namespace ariel{
    class Team:public baseTeam
    {
        private:
            // vector<Character*> members; can i see what this Charecter is ?
            vector<Cowboy*> cowboys;
            vector<Ninja*> ninjas;
        public:
            Team(Character* leader);
            // ~Team();
            // void add(Character* NewMember);
            // int stillAlive();
            // void attack(Character* leader);
            // void print();
    };
}