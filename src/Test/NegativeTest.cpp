#include "all.hpp"

TEST_CASE("Negative"){
    REQUIRE(Parser::evalUnaryOp(8,"-") == -8);
    REQUIRE_FALSE(Parser::evalUnaryOp(2,"-") == -8);
    REQUIRE(Parser::evalUnaryOp(1.5,"-") == -1.5);
    REQUIRE_FALSE(Parser::evalUnaryOp(1.5,"-") == -1.3);
}