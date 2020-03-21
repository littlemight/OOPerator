// TanExpression.hpp
// Header of Class TanExpression

#ifndef _TAN_EXPRESSION_HPP_
#define _TAN_EXPRESSION_HPP_
#include "UnaryExpression.hpp"
#include <cmath>

class TanExpression: public UnaryExpression {
public:
    TanExpression(Expression *x);
    double solve();
};

#endif
