#pragma once

#include <iostream>

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
        
        double operator - (Point &other); //distance between 2 points
        Point operator / (Point &other);  //midpoint of 2 points
        bool operator == (Point &other);  //checks if the 2 points are equal
        bool operator != (Point &other);  //checks if the 2 points are diffrent
        friend std::ostream &operator<<(std::ostream &ostream, Point point);  //streams the point to console
};
