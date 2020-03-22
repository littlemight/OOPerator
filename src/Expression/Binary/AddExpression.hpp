// AddExpression.hpp
// Header of Class AddExpression

#ifndef _ADD_EXPRESSION_HPP_
#define _ADD_EXPRESSION_HPP_
#include "BinaryExpression.hpp"

/**
 * @brief The AddExpression class menampung dua ekspresi terminal untuk dievaluasi dengan operasi tambah
 * merupakan turunan dari BinaryExpression
 */
class AddExpression: public BinaryExpression {
public:
    /**
     * @brief AddExpression sebuah konstruktor
     * @param x penyimpan ekspresi pertama
     * @param y penyimpan ekspresi kedua
     */
    AddExpression(Expression *x, Expression *y);
    /**
     * @brief mengembalikan nilai evaluasi dua ekspresi dengan pertambahan
     * @return sebuah bilangan double hasil evaluasi
     */
    double solve();
};

#endif
