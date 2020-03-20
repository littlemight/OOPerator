// SubstractExpression.cpp
// Implementation of Class SubstractExpression

#include "SubstractExpression.hpp"

SubstractExpression::SubstractExpression(Expression *x, Expression *y): BinaryExpression(x, y) {
}

float SubstractExpression::solve() {
	return (x->solve() - y->solve());
}
