#include "all.hpp"

TEST_CASE("Negative"){
    REQUIRE(Parser::evalUnaryOp(8,"-") == -8);
    REQUIRE(Parser::evalUnaryOp(2,"-") == -8);
}