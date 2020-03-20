// SinExpression.hpp
// Header of Class SinExpression

#ifndef _SIN_EXPRESSION_HPP_
#define _SIN_EXPRESSION_HPP_
#include "UnaryExpression.hpp"
#include <cmath>

#define PI 3.14159265

class SinExpression: public UnaryExpression {
public:
    SinExpression(Expression *x);
    float solve();
};

#endif
