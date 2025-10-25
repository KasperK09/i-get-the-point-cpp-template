#include <iostream>

#include "src/point.hpp"

int main() {
  Point point_1(3.2, 9.8);
  Point point_2(5.5, -1.2);

  double distance = point_1 - point_2;
  Point midpoint = point_1 / point_2;

  std::cout << "distance between points: " << distance << std::endl;
  std::cout << "midpoint of 2 points is: " << midpoint << std::endl;

  return 0;
}
