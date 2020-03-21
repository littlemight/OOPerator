#include "all.hpp"

TEST_CASE("Add") {
    REQUIRE(Parser::evalBinaryOp(1, 2, "+") == 3);
    REQUIRE(Parser::evalBinaryOp(1, 5, "+") == 6);
    REQUIRE(Parser::evalBinaryOp(1, 1, "+") == 0);
}