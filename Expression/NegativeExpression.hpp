#ifndef _NEGATIVE_EXPRESSION_HPP_
#define _NEGATIVE_EXPRESSION_HPP_
#include "Expression.hpp"

class NegativeExpression: public UnaryExpression {
public:
    NegativeExpression(Expression *x);
    float solve();
};

#endif
