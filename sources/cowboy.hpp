#pragma once
#include "Character.hpp"

namespace ariel
{
    class Cowboy:public Character
    {
    private:
        int bullets;
    public:
        Cowboy(string name ,Point location);
        // ~Cowboy();
        void shoot();
        bool hasboolets();
        void reload();
        
        //for test
        void print() override;
    };   
}