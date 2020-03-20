#ifndef _TERMINAL_EXPRESSION_HPP_
#define _TERMINAL_EXPRESSION_HPP_

#include "Expression.hpp"

class TerminalExpression : public Expression {
protected:
    float x;
public:
    TerminalExpression(float x);
    float solve();
};

#endif
