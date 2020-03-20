#ifndef _BINARY_EXPRESSION_HPP_
#define _BINARY_EXPRESSION_HPP_

#include "../Expression.hpp"

class BinaryExpression : public Expression {
protected:
    Expression* x;
    Expression* y;
public:
    BinaryExpression(Expression* x, Expression* y);
    virtual double solve() = 0;
};

#endif
