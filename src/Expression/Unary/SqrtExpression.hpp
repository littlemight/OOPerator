// TanExpression.hpp
// Header of Class TanExpression

#ifndef _SQRT_EXPRESSION_HPP_
#define _SQRT_EXPRESSION_HPP_
#include "UnaryExpression.hpp"
#include <cmath>

class SqrtExpression: public UnaryExpression {
public:
    SqrtExpression(Expression *x);
    double solve();
};

#endif
