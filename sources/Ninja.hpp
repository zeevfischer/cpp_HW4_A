
#pragma once
#include "Character.hpp"

namespace ariel{
    class Ninja:public Character
    {
        private:
            int speed;
        public:
            Ninja(Point location,string name,int life, int speed);//:Character(location,life,name),speed(speed){}
            ~Ninja();
            void move(Character* opponent);
            void slash(Character* opponent);
            int getSpeed();

            //for tests
            void print() override;
    };
    //Ninja classification
    class OldNinja:public Ninja{
        public:
            OldNinja(string name, Point location);
    };
    class TrainedNinja:public Ninja{
        public:
            TrainedNinja(string name, Point location);
    };
    class YountNinja:public Ninja{
        public:
            YountNinja(string name, Point location);
    };
}