#pragma one
namespace ariel
{
    class Point
    {
    private:
        double x;
        double y;
    public:
        Point(double x, double y);
        // ~Point();
        double distance(Point p);
        friend Point moveTowards(Point origin ,Point dest,double length);
        
        //getters
        double get_x();
        double get_y();
    };
}