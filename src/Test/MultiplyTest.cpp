#include "all.hpp"

TEST_CASE("Multiply"){
    REQUIRE(Parser::evalBinaryOp(1,2,"*") == 2);
    REQUIRE_FALSE(Parser::evalBinaryOp(2,3,"*") == 4);
    REQUIRE(Parser::evalBinaryOp(2,3.5,"*") == Approx(7));
}