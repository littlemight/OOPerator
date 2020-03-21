#include "all.hpp"

TEST_CASE("Multiply"){
    REQUIRE(Parser::evalBinaryOp(1,2,"*") == 2);
    REQUIRE(Parser::evalBinaryOp(2,3,"*") == 9);
}