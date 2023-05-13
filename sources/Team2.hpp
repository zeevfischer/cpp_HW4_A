#include "baseTeam.hpp"
#include <vector>
namespace ariel{
    class Team2:public baseTeam
    {
        private:
            vector<Character*> members;
        public:
            Team2(Character* leader);
            // ~Team2();
            // void add(Character* NewMember);
            // int stillAlive();
            // void attack(Character* leader);
            // void print();
    };
}