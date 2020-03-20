// PowExpression.hpp
// Header of Class PowExpression

#ifndef _POW_EXPRESSION_HPP_
#define _POW_EXPRESSION_HPP_
#include "BinaryExpression.hpp"
#include <cmath>

class PowExpression: public BinaryExpression {
public:
    PowExpression(Expression *x, Expression *y);
    double solve();
};

#endif
