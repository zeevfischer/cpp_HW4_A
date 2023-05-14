#include "Character.hpp"

namespace ariel{
    Character::Character(Point location , int life, string name)
    {
        this->location = location;
        this->life = life;
        this->name = name;
    }
    
    bool Character::isAlive(){
        if(this->life > 0)
        {
            return true;
        }
        return false;
    }
    //d = sqr(x1-x2)^2 + (y1-y2)^2
    double Character::distance(const Character* another)
    {
        return -1;
    }
    void Character::hit(int damage)
    {
        this->life -= damage;
    }
    string Character::GetName(){
        return this->name;
    }
    Point Character::Getlocation(){
        return this->location;
    }
    string Character::print(){
        return "not yes";
    }   
    int Character::GetLife()
    {
        return this->life;
    }

}