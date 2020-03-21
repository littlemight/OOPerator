// DivideExpression.cpp
// Implementation of Class DivideExpression

#include "DivideExpression.hpp"

DivideExpression::DivideExpression(Expression *x, Expression *y): BinaryExpression(x, y) {
}

double DivideExpression::solve() {
	if (y->solve() == 0) {
        throw new DivideWithZero;
    }
	return (x->solve() / y->solve());
}
