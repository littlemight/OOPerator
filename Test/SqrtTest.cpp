#include "all.hpp"

TEST_CASE("Sqrt") {
    REQUIRE(Parser::evalUnaryOp(9, "sqrt") == Approx(3));
}