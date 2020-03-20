#include "SqrtExpression.hpp"

SqrtExpression::SqrtExpression(Expression *x): UnaryExpression(x) {
}

double SqrtExpression::solve() {
    if (x->solve() < 0) {
        throw new NegativeSqrtException(x->solve());
    }
    return sqrt(x->solve());
}
