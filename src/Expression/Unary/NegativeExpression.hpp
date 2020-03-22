// NegativeExpression.hpp
// Header of Class NegativeExpression

#ifndef _NEGATIVE_EXPRESSION_HPP_
#define _NEGATIVE_EXPRESSION_HPP_
#include "UnaryExpression.hpp"

/**
 * @brief The NegativeExpression class mengevaluasi nilai negatif
 */
class NegativeExpression: public UnaryExpression {
public:
    /**
     * @brief NegativeExpression sebuah konstruktor
     * @param x sebagai value yang akan dievaluasi
     */
    NegativeExpression(Expression *x);
    /**
     * @brief solve mengembalikan hasil negatif dari x
     * @return sebuah float negatif
     */
    double solve();
};

#endif
