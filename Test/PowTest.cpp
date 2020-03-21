#include "all.hpp"

TEST_CASE("Pow") {
    REQUIRE(Parser::evalBinaryOp(2,3, "^") == 8);
    REQUIRE(Parser::evalBinaryOp(3,4, "^")== 81);
}