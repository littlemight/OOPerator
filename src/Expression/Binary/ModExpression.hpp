// ModExpression.hpp
// Header of Class ModExpression

#ifndef _MOD_EXPRESSION_HPP_
#define _MOD_EXPRESSION_HPP_
#include "BinaryExpression.hpp"
#include "../../Exception/ModException.hpp"
#include <string>
using namespace std;

/**
 * @brief The ModExpression class mengevaluasi hasil modulo dua angka
 */
class ModExpression: public BinaryExpression {
public:
    /**
     * @brief ModExpression sebuah konstruktor
     * @param x sebagai penyimpan terminal pertama
     * @param y sebagai penyimpan terminal kedua
     */
    ModExpression(Expression *x, Expression *y);
    /**
     * @brief isBothInt untuk mengecek apakah kedua angka integer
     * @return sebuah boolean
     */
    bool isBothInt();
    /**
     * @brief solve mengevaluasi hasil modulo dua angka
     * @return sebuah nilai hasil modulo
     */
    double solve();
};

#endif
