// SinExpression.cpp
// Implementation of Class SinExpression

#include "SinExpression.hpp"

SinExpression::SinExpression(Expression *x): UnaryExpression(x) {
}
float SinExpression::solve() {
	return sin(x->solve() * PI / 180);
}