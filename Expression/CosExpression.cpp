// CosExpression.cpp
// Implementation of Class CosExpression

#include "CosExpression.hpp"

CosExpression::CosExpression(Expression *x): UnaryExpression(x) {
}
float CosExpression::solve() {
	return cos(x->solve() * PI / 180);
}