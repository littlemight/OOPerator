// Expression.hpp
// Header of Class Expression

#ifndef _EXPRESSION_HPP_
#define _EXPRESSION_HPP_

/**
 * @brief The Expression class sebagai superclass dari seluruh ekspresi
 */
class Expression {
public:
    /**
     * @brief Expression sebuah konstruktor ekspresi
     */
    Expression();
    /**
     * @brief solve untuk mengevaluasi ekspresi
     * @return sebuah method pure virtual yang diserahkan ke anak-anaknya
     */
    virtual double solve() = 0;
};

#endif
