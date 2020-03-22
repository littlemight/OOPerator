// SinExpression.hpp
// Header of Class SinExpression

#ifndef _SIN_EXPRESSION_HPP_
#define _SIN_EXPRESSION_HPP_
#include "UnaryExpression.hpp"
#include <cmath>

#define PI 3.14159265

/**
 * @brief The SinExpression class mengevaluasi fungsi sinus dari x
 */
class SinExpression: public UnaryExpression {
public:
    /**
     * @brief SinExpression sebuah konstruktor
     * @param x nilai yang akan dievaluasi
     */
    SinExpression(Expression *x);
    /**
     * @brief solve mengembalikan nilai sin(x)
     * @return sebuah float hasil sin(x)
     */
    double solve();
};

#endif
