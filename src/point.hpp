#pragma once

#include <string>

class Point
{
private:
    double x;
    double y;
public:
    
    Point(double x_coordinate, double y_coordiante);

        double get_x();
        double get_y();

        void print();

        //distance between 2 points
        double operator-(Point &other);

        Point operator/(Point &other);
};
