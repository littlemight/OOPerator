#include "Expression.hpp"

TerminalExpression::TerminalExpression(float x) {
    this->x = x;
}

float TerminalExpression::solve() {
    return this->x;
}

UnaryExpression::UnaryExpression(Expression* x) {
    this->x = x;
}

BinaryExpression::BinaryExpression(Expression* x, Expression* y) {
    this->x = x;
    this->y = y;
}
