#include "Character.hpp"

namespace ariel{
    Character::Character(Point location , int life, string name)
    {
        this->location = location;
        this->life = life;
        this->name = name;
    }
    
    bool Character::isAlive(){
        return 1;
    }
    double Character::distance(const Character& another){
        return 1;
    }
    void Character::hit(int damage){}
    string Character::GetName(){
        return " ";
    }
    Point Character::Getlocation(){
        return Point(0,0);
    }
    string Character::print(){
        return " ";
    }   
    int Character::GetLife()
    {
        return this->life;
    }

}