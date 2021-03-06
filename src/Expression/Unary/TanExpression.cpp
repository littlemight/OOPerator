// TanExpression.cpp
// Implementation of Class TanExpression

#include "TanExpression.hpp"

TanExpression::TanExpression(Expression *x): UnaryExpression(x) {
}

double TanExpression::solve() {
	return tan(x->solve() * PI / 180);
}
