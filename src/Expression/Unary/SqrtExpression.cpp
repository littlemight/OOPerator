#include "SqrtExpression.hpp"

SqrtExpression::SqrtExpression(Expression *x): UnaryExpression(x) {
}

double SqrtExpression::solve() {
    return sqrt(x->solve());
}
