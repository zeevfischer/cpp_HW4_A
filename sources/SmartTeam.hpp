#include "cowboy.hpp"
#include "Ninja.hpp"
#include "Character.hpp"
#include "baseTeam.hpp"
#include <vector>
namespace ariel{
    class SmartTeam:public baseTeam
    {
        private:
            vector<Cowboy*> cowboys;
            vector<Ninja*> ninjas;
        public:
            SmartTeam(Character* leader);
            // ~SmartTeam();
            // void add(Character* NewMember);
            // int stillAlive();
            // void attack(Character* leader); //overide this !!!!
            // void print();
    };
}