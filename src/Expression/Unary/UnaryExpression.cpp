#include "UnaryExpression.hpp"
#include <cmath>

const double UnaryExpression::PI = acos(-1);

UnaryExpression::UnaryExpression(Expression* x) {
    this->x = x;
}

