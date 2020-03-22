// ModExpression.cpp
// Implementation of Class ModExpression

#include "ModExpression.hpp"

ModExpression::ModExpression(Expression *x, Expression *y): BinaryExpression(x, y) {
}

bool ModExpression::isBothInt(){
    if ((x->solve() - int(x->solve()) == 0) && (y->solve() - int(y->solve()) == 0)){
        return true;
    }
    else {
        return false;
    }
}

double ModExpression::solve() {
    if (y->solve() == 0) {
            throw new ZeroModException;
        }
    else if (isBothInt()){
        int result = (int(x->solve()) % int(y->solve()));
        return result;
    } 
    else {
        throw new DecimalModException;
    }
}
