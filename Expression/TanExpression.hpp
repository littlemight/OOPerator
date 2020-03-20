// TanExpression.hpp
// Header of Class TanExpression

#ifndef _TAN_EXPRESSION_HPP_
#define _TAN_EXPRESSION_HPP_
#include "Expression.hpp"
#include <cmath>

#define PI 3.14159265

class TanExpression: public UnaryExpression {
public:
    TanExpression(Expression *x);
    float solve();
};

#endif
