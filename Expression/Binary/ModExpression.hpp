// ModExpression.hpp
// Header of Class ModExpression

#ifndef _MOD_EXPRESSION_HPP_
#define _MOD_EXPRESSION_HPP_
#include "BinaryExpression.hpp"
#include "../../Exception/ModException.hpp"
#include <string>
using namespace std;

class ModExpression: public BinaryExpression {
public:
    ModExpression(Expression *x, Expression *y);
    bool isBothInt();
    double solve();
};

#endif
