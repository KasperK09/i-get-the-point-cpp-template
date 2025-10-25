#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/point.hpp"

TEST_CASE( "it checks if the distance operator overload works correclty with (0, 0) and (0, 0)" )
{
    Point point_1(0, 0);
    Point point_2(0, 0);

    double distance = point_1 - point_2;

    REQUIRE(distance == 0);
}

TEST_CASE( "it checks if the distance operator overload works correclty with (1, 1) and (1, 1)" )
{
    Point point_1(1, 1);
    Point point_2(1, 1);

    double distance = point_1 - point_2;

    REQUIRE(distance == 0);
}

TEST_CASE( "it returns the point (3.2, 9.8)" )
{
    Point point_1(3.2, 9.8);

    REQUIRE(point_1.get_x() == 3.2);
    REQUIRE(point_1.get_y() == 9.8);
}

TEST_CASE( "it returns the point (5.5, -1.2)" )
{
    Point point_2(5.5, -1.2);

    REQUIRE(point_2.get_x() == 5.5);
    REQUIRE(point_2.get_y() == -1.2);
}

TEST_CASE( "it checks if the distance operator overload works correclty with (3.2, 9.8) and (5.5, -1.2)" )
{
    Point point_1(3.2, 9.8);
    Point point_2(5.5, -1.2);

    double distance = point_1 - point_2;

    REQUIRE(distance == 11.2379);
}

TEST_CASE( "it checks if the midpoint operator overload works correctly with (3.2, 9.8) and (5.5, -1.2)" )
{
    Point point_1(3.2, 9.8);
    Point point_2(5.5, -1.2);
    
    Point midpoint = point_1 / point_2;

    REQUIRE(midpoint.get_x() == 4.35);
    REQUIRE(midpoint.get_y() == 4.3);

}

TEST_CASE( "it checks if the distance operator overload works correclty with (0, 0) and (0, 0)" )
{
    Point point_1(0, 0);
    Point point_2(0, 0);

    double distance = point_1 - point_2;

    REQUIRE(distance == 0);
}