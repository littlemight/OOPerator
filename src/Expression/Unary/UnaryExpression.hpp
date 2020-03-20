#ifndef _UNARY_EXPRESSION_HPP_
#define _UNARY_EXPRESSION_HPP_

#include "../Expression.hpp"

class UnaryExpression : public Expression {
protected:
    Expression* x;
public:
    static const double PI;
    UnaryExpression(Expression* x);
    virtual double solve() = 0;
};
#endif
