#include "all.hpp"

TEST_CASE("cos") {
    REQUIRE(Parser::evalUnaryOp(60, "cos") == Approx(0.5));
    REQUIRE(Parser::evalUnaryOp(30, "cos") == Approx(0.8660254041));
    REQUIRE_FALSE(Parser::evalUnaryOp(90, "cos") == 1);
   }
