// MultiplyExpression.cpp
// Implementation of Class MultiplyExpression

#include "MultiplyExpression.hpp"

MultiplyExpression::MultiplyExpression(Expression *x, Expression *y): BinaryExpression(x, y) {
}

double MultiplyExpression::solve() {
	return (x->solve() * y->solve());
}
