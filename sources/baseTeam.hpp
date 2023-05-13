#include "cowboy.hpp"
#include "Ninja.hpp"
#include "Character.hpp"
#include <vector>
namespace ariel{
    class baseTeam
    {
        private:
            Character& teamLeader;
        public:
            baseTeam(Character* leader);
            ~baseTeam();
            void add(Character* NewMember);
            int stillAlive();
            void attack(Character* leader);
            virtual void print();
    };
}