#include "all.hpp"

TEST_CASE("Sqrt") {
    REQUIRE(Parser::evalUnaryOp(9, "sqrt") == Approx(3));
    REQUIRE_THROWS_AS(Parser::evalUnaryOp(-1, "sqrt") == Approx(-1), NegativeSqrtException*);
}