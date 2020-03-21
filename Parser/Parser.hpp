#ifndef _PARSER_HPP_
#define _PARSER_HPP_

#include <map>
#include <set>
#include <vector>
#include <stack>
#include <sstream>
#include <cmath>
#include <iostream>
#include "../Expression/Binary/AddExpression.hpp"
#include "../Expression/Binary/SubstractExpression.hpp"
#include "../Expression/Binary/MultiplyExpression.hpp"
#include "../Expression/Binary/DivideExpression.hpp"
#include "../Expression/Binary/ModExpression.hpp"
#include "../Expression/Binary/PowExpression.hpp"
#include "../Expression/Unary/NegativeExpression.hpp"
#include "../Expression/Unary/SinExpression.hpp"
#include "../Expression/Unary/CosExpression.hpp"
#include "../Expression/Unary/TanExpression.hpp"
#include "../Expression/Unary/SqrtExpression.hpp"
#include "../Expression/TerminalExpression.hpp"

using namespace std;

class Parser
{   
private:
    static void splitTokens(string strTokens, vector<string> &tokens);
    static bool isUnaryStmt(string stmt, double &val, string &unaryOp);
    static void evalStack(stack<Expression *> &values, stack<string> &operators);
    static Expression* evalUnaryOp(Expression* a, string unaryOp);
    static Expression* evalBinaryOp(Expression* a, Expression* b, string binaryOp);
public:
    Parser();
    ~Parser();
    // UNIT TEST UTILITY
    static double evalUnaryOp(double a, string unaryOp);
    static double evalBinaryOp(double a, double b, string binaryOp);
    // END OF UNIT TEST UTILITY
    static double evalExpression(string strTokens);
    static bool isValidNum(string s);
    static bool isBinaryOp(string opr);
    static bool isUnaryOp(string opr);
private:
    static map<string, int> prc;
    static set<string> binaryOps;
    static set<string> unaryOps;
    static map<string, int> initPrc();
    static set<string> initBinaryOps();
    static set<string> initUnaryOps();
};
#endif // PARSER_H
