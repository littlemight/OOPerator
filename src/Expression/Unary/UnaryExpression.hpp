#ifndef _UNARY_EXPRESSION_HPP_
#define _UNARY_EXPRESSION_HPP_

#include "../Expression.hpp"

/**
 * @brief The UnaryExpression class menyimpan ekspresi tunggal
 */
class UnaryExpression : public Expression {
protected:
    Expression* x;
public:
    /**
     * @brief PI sebagai penunjang ekspresi trigonometri
     */
    static const double PI;
    /**
     * @brief UnaryExpression sebuah konstruktor
     * @param x sebagai penyimpan ekspresi tunggal
     */
    UnaryExpression(Expression* x);
    /**
     * @brief solve mengembalikan evaluasi ekspresi tunggal
     * @return sebuah metode pure virtual, diserahkan ke anak-anaknya
     */
    virtual double solve() = 0;
};
#endif
