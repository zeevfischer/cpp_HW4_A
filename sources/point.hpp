#ifndef POINT_HPP
#define POINT_HPP
// #include <iostream>
// #include <string>
// using namespace std;
namespace ariel
{
    class Point
    {
    private:
        double x;
        double y;
    public:
        Point(double x, double y);
        Point();
        // ~Point();
        double distance(Point p);
        friend Point moveTowards(Point origin ,Point dest,double length);
        
        //getters
        double get_x();
        double get_y();

        string print();
    };
}
#endif