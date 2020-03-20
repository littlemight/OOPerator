#include "TerminalExpression.hpp"

TerminalExpression::TerminalExpression(float x) {
    this->x = x;
}

float TerminalExpression::solve() {
    return this->x;
}