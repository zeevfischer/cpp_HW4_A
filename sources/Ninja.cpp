#include "Ninja.hpp"
#include <iostream>
#include <string>

using namespace std;
namespace ariel
{
    //Ninja
    Ninja::Ninja(Point location,string name,int life,int speed):Character(location,life,name),speed(speed){}
    void move(Character* opponent)
    {
        //how dose it move?
    }
    void Ninja::slash(Character* opponent)
    {
        if(this->distance(opponent) <= 1)//in range needs fixing this is probrbly not accuret
        {
            opponent->hit(40);
        }
    }
    void Ninja::move(Character *opponent)
    {
        //needs to move
    }
    int Ninja::getSpeed()
    {
        return this->speed;
    }
    void Ninja::setSpeed(int speed)
    {
        this->speed = speed;
    }
    string Ninja::print()
    {
        string print = "";
        print +=this->GetName() + ": is a Ninja\n";
        print += "life left: " + to_string(this->GetLife());
        print += "\nlocation: " + this->Getlocation().print() + "\n";
        return print;
    }

    //OldNinja constructor
    OldNinja::OldNinja(string name, Point location)
        : Ninja(location, name, 140, 8) {}

    //TrainedNinja constructor
    TrainedNinja::TrainedNinja(string name, Point location)
        : Ninja(location, name, 120, 12) {}

    //YountNinja constructor
    YoungNinja::YoungNinja(string name, Point location)
        : Ninja(location, name, 100, 14) {}
}