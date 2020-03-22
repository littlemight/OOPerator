// ModExpression.hpp
// Header of Class MultiplyExpression

#ifndef _MULTIPLY_EXPRESSION_HPP_
#define _MULTIPLY_EXPRESSION_HPP_
#include "BinaryExpression.hpp"

/**
 * @brief The MultiplyExpression class mengevaluasi hasil perkalian dua angka
 */
class MultiplyExpression: public BinaryExpression {
public:
    /**
     * @brief MultiplyExpression sebuah konstruktor
     * @param x sebagai penyimpan terminal pertama
     * @param y sebagai penyimpan terminal kedua
     */
    MultiplyExpression(Expression *x, Expression *y);
    /**
     * @brief solve mengembalikan hasil perkalian dua angka
     * @return sebuah float hasil perkalian dua angka
     */
    double solve();
};

#endif
