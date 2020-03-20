// PowExpression.cpp
// Implementation of Class PowExpression

#include "PowExpression.hpp"

PowExpression::PowExpression(Expression *x, Expression *y): BinaryExpression(x, y) {
}

float PowExpression::solve() {
	return pow((double) x->solve(), (double) y->solve());
}
