#include "point.hpp"
#include <iostream>
#include <string>
using namespace std;
namespace ariel
{
    Point::Point(double a,double b)
    {
        this->x = a;
        this->y = b;
    }
    double Point::distance(Point p)
    {
            return 0;
    }
    Point moveTowards(Point origin,Point dest,double length)
    {
        return Point(0,0);
    }
    string Point::print()
    {
        return  "(" + to_string(this->get_x()) + "," + to_string(this->get_y()) + ")" ;
    }
}