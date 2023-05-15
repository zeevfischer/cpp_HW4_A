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
    Point::Point()
    {}
    double Point::distance(Point p)
    {
            return 0;
    }
    Point moveTowards(Point origin,Point dest,double length)
    {
        return Point(0,0);
    }
    double Point::get_x()
    {
        return this->x;
    }
    double Point::get_y()
    {
        return this->y;
    }
    string Point::print()
    {
        return  "(" + to_string(this->get_x()) + "," + to_string(this->get_y()) + ")" ;
    }
}