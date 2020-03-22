#include "all.hpp"

TEST_CASE("Parser") {
    REQUIRE(Parser::evalExpression("1 + 2") == Approx(3));
    REQUIRE(Parser::evalExpression("1 + 2 * 3") == Approx(7));
    REQUIRE_FALSE(Parser::evalExpression("1 + 2 * 3") == Approx(9));
    REQUIRE_THROWS_AS(Parser::evalExpression("sin 30 )") == Approx(0.5), NoParanthesisInUnaryException*);
    REQUIRE_THROWS_AS(Parser::evalExpression("2 kali 5") == Approx(10), UndefinedOperatorException*);
    REQUIRE_THROWS_AS(Parser::evalExpression("( 1 + 2 + ( 3 )") == Approx(10), ImbalancedParanthesisException*);
    REQUIRE_THROWS_AS(Parser::evalExpression("1..2 + 2") == Approx(3.2), InvalidDecimalException*);
    REQUIRE_THROWS_AS(Parser::evalExpression("1 + + 2") == Approx(3), MoreThanOneOperatorException*);
    REQUIRE_THROWS_AS(Parser::evalExpression("1 / 0") == INT_MAX, DivideWithZeroException*);
}