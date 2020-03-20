#include "Parser.hpp"

Parser::Parser() {
}

map<string, int> Parser::initPrc() {
    map<string, int> ret;
    // nilai precedence sebuah operator
    ret["+"] = 1;
    ret["-"] = 1;
    ret["*"] = 2;
    ret["-"] = 2;
    ret["pow"] = 3;
    ret["mod"] = 3;
    // everything else is 0
    return ret;
}

set<string> Parser::initBinaryOps() {
    set<string> ret;
    ret.insert("+");
    ret.insert("-");
    ret.insert("*");
    ret.insert("/");
    ret.insert("pow");
    ret.insert("mod");
    return ret;
}

set<string> Parser::initUnaryOps() {
    set<string> ret;
    ret.insert("sqrt");
    ret.insert("sin");
    ret.insert("cos");
    ret.insert("tan");
    return ret;
}

map<string, int> Parser::prc = initPrc();
set<string> Parser::binaryOps = initBinaryOps();
set<string> Parser::unaryOps = initUnaryOps();

void Parser::splitTokens(string strTokens, vector<string> &tokens) {
    stringstream ss(strTokens);
    string curToken;
    vector<string> tmp;
    while (ss >> curToken) {
        tmp.push_back(curToken);
    }

    // di filter dulu buat unary operator kaya sin/cos dll
    int sz = tmp.size();
    stack<string> kurung;
    for (int i = 0; i < sz; i++) {
        if (isUnaryOp(tmp[i])) {
            // cari buka kurung sama tutup kurung yang seimbang
            string unaryStmt = "";
            unaryStmt += tmp[i];
            for (int j = i + 1; j < sz; j++) {
                unaryStmt += " " + tmp[j];

                if (tmp[j] == "(") {
                    kurung.push(tmp[j]);
                } else if (tmp[j] == ")") {
                    if (!kurung.empty()) {
                        kurung.pop();
                    } else {
                        throw "Imbalanced Parantheses Sequence";
                    }
                }
                // else, dia operator / angka

                if (kurung.empty()) {
                    i = j;
                    break;
                }
            }
            tokens.push_back(unaryStmt);
        } else {
            tokens.push_back(tmp[i]);
        }
    }
}

bool Parser::isValidNum(string s) {
    int decCount = 0;
    int sz = s.size();
    for (int i = 0; i < sz; i++) {
        if (!isdigit(s[i]) && s[i] != '.') {
            return false;
        }
        if (s[i] == '.') {
            if (i == 0) {
                return false;
            }
            decCount++;
            if (decCount > 1) {
                return false;
            }
        }
    }
    return true;
}

bool Parser::isBinaryOp(string opr) {
    return binaryOps.find(opr) != binaryOps.end();
}

bool Parser::isUnaryOp(string opr) {
    return unaryOps.find(opr) != unaryOps.end();
}

bool Parser::isUnaryStmt(string stmt, double &val, string &unaryOp) {
    unaryOp = "";
    stringstream ss(stmt);
    string curToken;

    vector<string> tmp;
    while (ss >> curToken) {
        tmp.push_back(curToken);
    }

    int sz = tmp.size();
    unaryOp = tmp[0];
    if (!(tmp[1] == "(" && tmp[sz - 1] == ")")) {
        throw "Imbalanced Parantheses Sequence";
    }

    string strVal = ""; // statement yang di dalam unary operator
    for (int i = 2; i <= sz - 2; i++) {
        if (i == 2) {
            strVal += tmp[i];
        } else {
            strVal += " " + tmp[i];
        }
    }

    try {
        val = evalExpression(strVal);
        return isUnaryOp(unaryOp);
    } catch (invalid_argument ia) {
        return false;
    }
}

Expression* Parser::evalUnaryOp(Expression* a, string unaryOp) {
    Expression* ret;
    if (unaryOp == "sin") {
        ret = new SinExpression(a);
    } else if (unaryOp == "cos") {
        ret = new CosExpression(a);
    } else if (unaryOp == "tan") {
        ret = new TanExpression(a);
    } else if (unaryOp == "sqrt") {
        ret = new SqrtExpression(a);
    }
    return ret;
}

Expression* Parser::evalBinaryOp(Expression* a, Expression* b, string binaryOp) {
    // cout << "EVALUATING: " << a << ' ' << binaryOp << ' ' << b << '\n';
    Expression* ret;
    if (binaryOp == "+") {
        ret = new AddExpression(a, b);
    } else if (binaryOp == "-") {
        ret = new SubstractExpression(a, b);
    } else if (binaryOp == "*") {
        ret = new MultiplyExpression(a, b);
    } else if (binaryOp == "/") {
        ret = new DivideExpression(a, b);
    } else if (binaryOp == "pow") {
        ret = new PowExpression(a, b);
    } else if (binaryOp == "mod") {
        ret = new ModExpression(a, b);
    }
    return ret;
}

void Parser::evalStack(stack<Expression *> &values, stack<string> &operators) {
    if (values.size() < 2) {
        throw "Invalid Mathematical Operation";
    }
    Expression* secVal = values.top();
    values.pop();
    Expression* fstVal = values.top();
    values.pop();

    string opr = operators.top();
    operators.pop();
    values.push(evalBinaryOp(fstVal, secVal, opr));
}

double Parser::evalExpression(string strTokens) {
    vector<string> tokens;
    tokens.clear();
    splitTokens(strTokens, tokens);
    double tmp;
    string unaryOp;

    stack<Expression *> values;
    stack<string> operators;
    int sz = tokens.size();
    cout << strTokens << '\n';
    for (int i = 0; i < sz; i++) {
        cout << i << ": " << tokens[i] << '\n';
    }

    Expression* val;
    for (int i = 0; i < sz; i++) {
        cout << i << ": " << tokens[i] << '\n';
        if (tokens[i] == "(") {
            operators.push(tokens[i]);
        } else if (tokens[i] == ")") {
            while (!operators.empty() && operators.top() != "(") {
                evalStack(values, operators);
            }

            if (!operators.empty()) {
                if (operators.top() != "(") {
                    throw "Imbalanced Parantheses Sequence";
                } else {
                    operators.pop();
                }
            } else {
                throw "Imbalanced Parantheses Sequence";
            }
        } else if (isdigit(tokens[i][0])||
                   // (tokens[i][0] == '-' && tokens[i] != "-") ||
                   ((i == 0 || (isBinaryOp(tokens[i - 1]) || tokens[i - 1] == "(")) && tokens[i] == "-" && i < sz - 1 && isdigit(tokens[i + 1][0]))
                   ) {
            if ((i == 0 || (isBinaryOp(tokens[i - 1]) || tokens[i - 1] == "(")) &&
                    tokens[i] == "-" &&
                    i < sz - 1 &&
                    isdigit(tokens[i + 1][0])) {
                if (isValidNum(tokens[i + 1])) {
                    val = new NegativeExpression(new TerminalExpression(stod(tokens[i + 1])));
                    i++;
                } else {
                    throw "Invalid decimal point";
                }
            } else {
                if (isValidNum(tokens[i])) {
                    val = new TerminalExpression(stod(tokens[i]));
                } else {
                    throw "Invalid decimal point";
                }
            }
            values.push(val);
        } else if (isBinaryOp(tokens[i])) {
            while (!operators.empty() && prc[operators.top()] >= prc[tokens[i]]) {
                evalStack(values, operators);
            }
            operators.push(tokens[i]);
        } else if (isUnaryStmt(tokens[i], tmp, unaryOp)) {
            values.push(evalUnaryOp(new TerminalExpression(tmp), unaryOp));
        } else {
            throw "Invalid Mathematical Expression";
        }
    }

    while (!operators.empty()) {
        evalStack(values, operators);
    }
    if (values.size() != 1) {
        throw "Invalid mathematical expression";
    } else {
        return values.top()->solve();
    }
}
