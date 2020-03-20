// PowExpression.cpp
// Implementation of Class PowExpression

#include "PowExpression.hpp"

PowExpression::PowExpression(Expression *x, Expression *y): BinaryExpression(x, y) {
}

double PowExpression::solve() {
	return pow((double) x->solve(), (double) y->solve());
}
