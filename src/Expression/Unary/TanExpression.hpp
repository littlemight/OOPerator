// TanExpression.hpp
// Header of Class TanExpression

#ifndef _TAN_EXPRESSION_HPP_
#define _TAN_EXPRESSION_HPP_
#include "UnaryExpression.hpp"
#include <cmath>

/**
 * @brief The TanExpression class mengevaluasi tangen suatu nilai
 */
class TanExpression: public UnaryExpression {
public:
    /**
     * @brief TanExpression sebuah konstruktor
     * @param x sebagai penyimpan nilai tan(x)
     */
    TanExpression(Expression *x);
    /**
     * @brief solve mengembalikan hasil tan(x)
     * @return sebuah float hasil tan(x)
     */
    double solve();
};

#endif
