// CosExpression.hpp
// Header of Class CosExpression

#ifndef _COS_EXPRESSION_HPP_
#define _COS_EXPRESSION_HPP_
#include "UnaryExpression.hpp"
#include <cmath>

#define PI 3.14159265

class CosExpression: public UnaryExpression {
public:
    CosExpression(Expression *x);
    double solve();
};

#endif