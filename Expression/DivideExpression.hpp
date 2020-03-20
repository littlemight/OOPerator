// DivideExpression.hpp
// Header of Class DivideExpression

#ifndef _DIVIDE_EXPRESSION_HPP_
#define _DIVIDE_EXPRESSION_HPP_
#include "Expression.hpp"

class DivideExpression: public BinaryExpression {
public:
    DivideExpression(Expression *x, Expression *y);
    float solve();
};

#endif
