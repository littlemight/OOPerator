#ifndef _MOD_EXPRESSION_HPP_
#define _MOD_EXPRESSION_HPP_
#include "Expression.hpp"
#include <string>
using namespace std;

class ModExpression: public BinaryExpression {
public:
    ModExpression(Expression *x, Expression *y);
    bool isBothInt();
    float solve();
};

#endif
