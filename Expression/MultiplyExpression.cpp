// MultiplyExpression.cpp
// Implementation of Class MultiplyExpression

#include "MultiplyExpression.hpp"

MultiplyExpression::MultiplyExpression(Expression *x, Expression *y): BinaryExpression(x, y) {
}

float MultiplyExpression::solve() {
	return (x->solve() * y->solve());
}
