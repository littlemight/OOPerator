#include "all.hpp"

TEST_CASE("Divide") {
    REQUIRE(Parser::evalBinaryOp(1, 2, "/") == Approx(0.5));
    REQUIRE(Parser::evalBinaryOp(1, 5, "/") == Approx(0.2));
    REQUIRE(Parser::evalBinaryOp(1, -1, "/") == Approx(1));
    REQUIRE_THROWS_AS(Parser::evalBinaryOp(1, 0, "/") == Approx(0), DivideWithZero*);
    REQUIRE_THROWS_AS(Parser::evalBinaryOp(1, -0, "/") == Approx(1), DivideWithZero*);
}