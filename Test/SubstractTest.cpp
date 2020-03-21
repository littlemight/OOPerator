#include "all.hpp"

TEST_CASE("Substract") {
    REQUIRE(Parser::evalBinaryOp(1, 2, "-") == -1);
    REQUIRE(Parser::evalBinaryOp(1, 5, "-") == -4);
    REQUIRE(Parser::evalBinaryOp(1, 1, "-") == 0);
    REQUIRE(Parser::evalBinaryOp(19.5, 0.55, "-") == 18.95);
    REQUIRE(Parser::evalBinaryOp(102, -13, "-") == 115);
}