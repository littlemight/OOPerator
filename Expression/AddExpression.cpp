// AddExpression.cpp
// Implementation of Class AddExpression

#include "AddExpression.hpp"

AddExpression::AddExpression(Expression *x, Expression *y): BinaryExpression(x, y) {
}

float AddExpression::solve() {
	return (x->solve() + y->solve());
}
