#include "all.hpp"

TEST_CASE("Queue") {
    queue<double> q;
    REQUIRE(q.empty());
    q.push(1);
    REQUIRE(q.front() == 1);
}