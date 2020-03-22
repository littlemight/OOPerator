// PowExpression.hpp
// Header of Class PowExpression

#ifndef _POW_EXPRESSION_HPP_
#define _POW_EXPRESSION_HPP_
#include "BinaryExpression.hpp"
#include <cmath>

/**
 * @brief The PowExpression class mengevaluasi ekspresi pangkat
 */
class PowExpression: public BinaryExpression {
public:
    /**
     * @brief PowExpression sebuah konstruktor
     * @param x menyimpan nilai dari value bilangan yang ingin dipangkat
     * @param y menyimpan nilai dari value pangkat
     */
    PowExpression(Expression *x, Expression *y);
    /**
     * @brief solve mengembalikan hasil x^y
     * @return sebuah float hasil perpangkatan
     */
    double solve();
};

#endif
