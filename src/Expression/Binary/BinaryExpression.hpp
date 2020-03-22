#ifndef _BINARY_EXPRESSION_HPP_
#define _BINARY_EXPRESSION_HPP_

#include "../Expression.hpp"

/**
 * @brief The BinaryExpression class menyimpan dua buah ekspresi
 */
class BinaryExpression : public Expression {
protected:
    Expression* x;
    Expression* y;
public:
    /**
     * @brief BinaryExpression sebuah konstruktor
     * @param x sebagai penyimpan ekspresi pertama
     * @param y sebagai penyimpan ekspresi kedua
     */
    BinaryExpression(Expression* x, Expression* y);
    /**
     * @brief solve mengembalikan evaluasi dua ekspresi
     * @return sebuah metode pure virtual, diserahkan ke anak-anaknya
     */
    virtual double solve() = 0;
};

#endif
