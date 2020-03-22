#include "all.hpp"

bool qNotEmpty(queue<double> &q) {
    if (q.empty()) throw "Custom empty exception, STL Queue doesn\'t throw an exception when we empty an empty queue";
    return true;
}


TEST_CASE("Queue") {
    queue<double> q;

    SECTION("Push and see front") {
        while (!q.empty()) {
            q.pop();
        }
        q.push(1);
        REQUIRE(q.front() == 1);
    }

    SECTION("Push another, pop, and see pushed value") {
        q.push(1);
        REQUIRE(q.front() == 1);
        q.push(2);
        q.pop();
        REQUIRE(q.front() == 2);
        q.pop();
    }

    SECTION("Pop when empty, custom exception") {
        q.push(135);
        REQUIRE(qNotEmpty(q) == true);
        q.pop();
        REQUIRE_THROWS_AS(qNotEmpty(q) == false, const char *);
    }
}