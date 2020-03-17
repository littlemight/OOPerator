#include "NegativeExpression.hpp"

NegativeExpression::NegativeExpression(Expression *x): UnaryExpression(x) {
}
float NegativeExpression::solve() {
	return -(x->solve());
}