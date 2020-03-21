#include "all.hpp"

TEST_CASE("Add") {
    REQUIRE(Parser::evalBinaryOp(1, 2, "+") == 3);
    REQUIRE(Parser::evalBinaryOp(1, 5, "+") == 6);
    REQUIRE(Parser::evalBinaryOp(10, -10, "+") == 0);
    REQUIRE(Parser::evalBinaryOp(100.32, 2, "+") == 102.32);
    REQUIRE(Parser::evalBinaryOp(19.5, 0.55, "+") == 20.05);
    REQUIRE(Parser::evalBinaryOp(102, -13, "+") == 89);
    REQUIRE(Parser::evalBinaryOp(0, 20.5, "+") == 20.5);
    REQUIRE(Parser::evalBinaryOp(-20.99, 5.99, "+") == -15);
    REQUIRE(Parser::evalBinaryOp(-1, -0.3, "+") == -1.3);
}