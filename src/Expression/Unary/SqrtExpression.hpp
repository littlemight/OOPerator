// TanExpression.hpp
// Header of Class TanExpression

#ifndef _SQRT_EXPRESSION_HPP_
#define _SQRT_EXPRESSION_HPP_
#include "UnaryExpression.hpp"
#include "../../Exception/NegativeSqrtException.hpp"
#include <cmath>

/**
 * @brief The SqrtExpression class mengevaluasi akar dari suatu nilai
 */
class SqrtExpression: public UnaryExpression {
public:
    /**
     * @brief SqrtExpression sebuah konstruktor
     * @param x sebagai nilai yang akan diakar
     */
    SqrtExpression(Expression *x);
    /**
     * @brief solve mengembalikan nilai dari sqrt(x)
     * @return sebuah double sebagai hasil sqrt(x)
     */
    double solve();
};

#endif
