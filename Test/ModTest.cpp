#include "all.hpp"

TEST_CASE("Mod"){
    REQUIRE(Parser::evalBinaryOp(6,5,"mod") == 1);
    REQUIRE(Parser::evalBinaryOp(6,3,"mod") == 1);
}