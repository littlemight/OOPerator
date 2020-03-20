// ModExpression.hpp
// Header of Class MultiplyExpression

#ifndef _MULTIPLY_EXPRESSION_HPP_
#define _MULTIPLY_EXPRESSION_HPP_
#include "BinaryExpression.hpp"

class MultiplyExpression: public BinaryExpression {
public:
    MultiplyExpression(Expression *x, Expression *y);
    float solve();
};

#endif
