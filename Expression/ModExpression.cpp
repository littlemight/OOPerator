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

float ModExpression::solve() {
    float f1 = x->solve();
    float f2 = y->solve();
    if (isBothInt()){
        int result = (int(x->solve()) % int(y->solve()));
        return result;
    }
    else {
        // THROW EXCEPTION
        return -999;
    }
	
}
