// CosExpression.hpp
// Header of Class CosExpression

#ifndef _COS_EXPRESSION_HPP_
#define _COS_EXPRESSION_HPP_
#include "UnaryExpression.hpp"
#include <cmath>

#define PI 3.14159265

/**
 * @brief The CosExpression class mengekspresikan nilai cosinus
 */
class CosExpression: public UnaryExpression {
public:
    /**
     * @brief CosExpression sebuah konstruktor
     * @param x sebagia nilai yang akan diolah
     */
    CosExpression(Expression *x);
    /**
     * @brief solve mengembalikan hasil cos(x)
     * @return sebuah float
     */
    double solve();
};

#endif
