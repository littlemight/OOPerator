// NegativeExpression.hpp
// Header of Class NegativeExpression

#ifndef _NEGATIVE_EXPRESSION_HPP_
#define _NEGATIVE_EXPRESSION_HPP_
#include "UnaryExpression.hpp"

class NegativeExpression: public UnaryExpression {
public:
    NegativeExpression(Expression *x);
    double solve();
};

#endif
