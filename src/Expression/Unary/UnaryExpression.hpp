#ifndef _UNARY_EXPRESSION_HPP_
#define _UNARY_EXPRESSION_HPP_

#include "../Expression.hpp"

class UnaryExpression : public Expression {
protected:
    Expression* x;
public:
    UnaryExpression(Expression* x);
    virtual float solve() = 0;
};
#endif
