#pragma one
#include "point.hpp"
#include <string>
#include <iostream>
using namespace std;

namespace ariel
{
    class Character
    {
    private:
        Point location;
        int life;
        string name;
    public:
        Character(Point location,int life,string name);
        // ~Character();
        bool isAlive(); // life > 0
        double distance(const Character& other);
        void hit(int attack);//life - attack
        virtual void print();

        //getters
        string GetName();
        Point Getlocation();



    };
}