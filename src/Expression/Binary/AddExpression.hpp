// AddExpression.hpp
// Header of Class AddExpression

#ifndef _ADD_EXPRESSION_HPP_
#define _ADD_EXPRESSION_HPP_
#include "BinaryExpression.hpp"

class AddExpression: public BinaryExpression {
public:
    AddExpression(Expression *x, Expression *y);
    double solve();
};

#endif
