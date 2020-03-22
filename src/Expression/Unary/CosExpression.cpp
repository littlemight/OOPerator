// CosExpression.cpp
// Implementation of Class CosExpression

#include "CosExpression.hpp"

CosExpression::CosExpression(Expression *x): UnaryExpression(x) {
}

double CosExpression::solve() {
	return cos(x->solve() * PI / 180);
}
