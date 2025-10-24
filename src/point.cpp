#include <iostream>

#include "point.hpp"

Point::Point(double x_coordinate, double y_coordinate) : x(x_coordinate), y(y_coordinate)
{

}

double Point::get_x()
{
   return x;
}

double Point::get_y()
{
   return y;
}

//distance between 2 points
double Point::operator-(Point &other)
{
   double distance_x = other.x - x;
   double distance_y = other.y - y;

   return std::sqrt(distance_x * distance_x + distance_y * distance_y);
}

Point Point::operator/(Point &other)
{
   double midpoint_x = (x + other.x) / 2.0;
   double midpoint_y = (y + other.y) / 2.0;

   return Point(midpoint_x, midpoint_y);
}