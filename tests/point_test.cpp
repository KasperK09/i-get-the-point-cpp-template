#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/point.hpp"

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
