// DivideExpression.cpp
// Implementation of Class DivideExpression

#include "DivideExpression.hpp"

DivideExpression::DivideExpression(Expression *x, Expression *y): BinaryExpression(x, y) {
}

double DivideExpression::solve() {
	return (x->solve() / y->solve());
}
