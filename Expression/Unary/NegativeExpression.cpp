// NegativeExpression.cpp
// Implementation of Class NegativeExpression

#include "NegativeExpression.hpp"

NegativeExpression::NegativeExpression(Expression *x): UnaryExpression(x) {
}

double NegativeExpression::solve() {
	return -(x->solve());
}
