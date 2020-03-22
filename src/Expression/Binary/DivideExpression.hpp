// DivideExpression.hpp
// Header of Class DivideExpression

#ifndef _DIVIDE_EXPRESSION_HPP_
#define _DIVIDE_EXPRESSION_HPP_
#include "BinaryExpression.hpp"
#include "../../Exception/DivideWithZeroException.hpp"

/**
 * @brief The DivideExpression class mengevaluasi ekspresi pembagian
 */
class DivideExpression: public BinaryExpression {
public:
    /**
     * @brief DivideExpression sebuah konstruktor
     * @param x sebagai penyimpan terminal pertama
     * @param y sebagai penyimpan terminal kedua
     */
    DivideExpression(Expression *x, Expression *y);
    /**
     * @brief solve mengevaluasi pembagian x dengan y
     * @return sebuah double hasil pembagian
     */
    double solve();
};

#endif
