#include "DivideExpression.hpp"

DivideExpression::DivideExpression(Expression *x, Expression *y): BinaryExpression(x, y) {
}

float DivideExpression::solve() {
	return (x->solve() / y->solve());
}
