#include "all.hpp"

TEST_CASE("Mod"){
    REQUIRE(Parser::evalBinaryOp(6,5,"mod") == 1);
    REQUIRE_FALSE(Parser::evalBinaryOp(6,3,"mod") == 5);
    REQUIRE(Parser::evalBinaryOp(7,2,"mod") == 1);
    REQUIRE_THROWS_AS(Parser::evalBinaryOp(1, 0, "mod") == Approx(0), ZeroModException*);
    REQUIRE_THROWS_AS(Parser::evalBinaryOp(1, 1.2, "mod") == Approx(1), DecimalModException*);
}