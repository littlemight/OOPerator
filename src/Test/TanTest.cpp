#include "all.hpp"

TEST_CASE("Tan") {
    REQUIRE(Parser::evalUnaryOp(45, "tan") == Approx(1.0));
    REQUIRE_FALSE(Parser::evalUnaryOp(60, "tan") == Approx(0.25));
}
