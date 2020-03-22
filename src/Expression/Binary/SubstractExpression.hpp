// SubstractExpression.hpp
// Header of Class SubstractExpression

#ifndef _SUBSTRACT_EXPRESSION_HPP_
#define _SUBSTRACT_EXPRESSION_HPP_
#include "BinaryExpression.hpp"

/**
 * @brief The SubstractExpression class mengevaluasi pengurangan dua buah nilai
 */
class SubstractExpression: public BinaryExpression {
public:
    /**
     * @brief SubstractExpression sebuah konstruktor
     * @param x sebagai penyimpan nilai pertama
     * @param y sebagai penyimpan nilai kedua
     */
    SubstractExpression(Expression *x, Expression *y);
    /**
     * @brief solve mengembalikan hasil pengurangan x-y
     * @return sebuah float hasil pengurangan x-y
     */
    double solve();
};

#endif
