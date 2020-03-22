#include "all.hpp"

TEST_CASE("Sin"){
    REQUIRE(Parser::evalUnaryOp(90,"sin") == 1);
    REQUIRE(Parser::evalUnaryOp(30,"sin") == Approx(0.5));
}