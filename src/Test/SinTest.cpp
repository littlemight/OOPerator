#include "all.hpp"

TEST_CASE("Sin") {
    REQUIRE(Parser::evalUnaryOp(30, "sin") == Approx(0.5));
    REQUIRE(Parser::evalUnaryOp(60, "sin") == Approx( 0.8660254032));
    REQUIRE(Parser::evalUnaryOp(90, "sin") == 1);
    REQUIRE_FALSE(Parser::evalUnaryOp(60, "sin") == Approx( 0.8661));
   }
