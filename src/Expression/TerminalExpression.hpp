#ifndef _TERMINAL_EXPRESSION_HPP_
#define _TERMINAL_EXPRESSION_HPP_

#include "Expression.hpp"

/**
 * @brief The TerminalExpression class penyimpan ekspresi terminal atau nilai dan turunan dari Expression
 */
class TerminalExpression : public Expression {
protected:
    double x;
public:
    /**
     * @brief TerminalExpression sebuah konstruktor
     * @param x penyimpan nilai terminal
     */
    TerminalExpression(double x);
    /**
     * @brief solve mengembalikan nilai dari x
     * @return sebuah nilai x itu sendiri
     */
    double solve();
};

#endif
