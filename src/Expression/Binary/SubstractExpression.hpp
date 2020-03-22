// SubstractExpression.hpp
// Header of Class SubstractExpression

#ifndef _SUBSTRACT_EXPRESSION_HPP_
#define _SUBSTRACT_EXPRESSION_HPP_
#include "BinaryExpression.hpp"

class SubstractExpression: public BinaryExpression {
public:
    SubstractExpression(Expression *x, Expression *y);
    double solve();
};

#endif
