#ifndef _PARSER_HPP_
#define _PARSER_HPP_

#include <string>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <sstream>
#include <cmath>
#include <iostream>
using namespace std;

class Parser
{   
private:
    // string strTokens;
    // vector<string> tokens;

    static void splitTokens(string strTokens, vector<string> &tokens);
    static bool isUnaryStmt(string stmt, double &val, string &unaryOp);
    static double evalUnaryOp(double a, string unaryOp);
    static double evalBinaryOp(double a, double b, string binaryOp);
public:
    Parser();
    ~Parser();
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
    static const double PI;
};

#endif // PARSER_H
