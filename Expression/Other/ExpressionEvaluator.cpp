#include <bits/stdc++.h>
using namespace std;

const double PI = acos(-1);

map<string, int> prc;
set<string> binaryOps;
set<string> unaryOps;

void initOps();
void splitTokens(string strTokens, vector<string> &tokens);
bool isBinaryOp(string opr);
bool isUnaryOp(string opr);
bool isUnaryStmt(string stmt, double &val, string &unaryOp);
double evalUnaryOp(double a, string unaryOp);
double evalBinaryOp(double a, double b, string binaryOp);
double evalExpression(string strTokens);

int main() {
    // mau output berapa angka di belakang koma. untuk ini, 3 angka dibelakang koma
    cout << fixed << setprecision(3);
    
    initOps();

    // Coba masukkin ekspresi matematika yang mau dievaluasi, setiap token dipisahin oleh spasi
    // Contoh :
    // 1 + 4
    // 1 + 2 * 3
    // 1 + sin ( 30 )
    // 1 + sqrt ( 2 + sqrt ( 8 * sin ( 30 ) ) )
    string s;
    while (getline(cin, s)) {
        try {
            cout << "Expression: " << s << '\n';
            cout << "Value: " << evalExpression(s) << '\n';
        } catch (invalid_argument& ia) {
            cout << "Invalid argument: " << ia.what() << '\n';
        } catch (const char* s) {
            cout << "Error: " << s << '\n';
        }
        cout << '\n';
    }
    return 0;
}

void initOps() {
    // nilai precedence sebuah operator
    prc["+"] = 1;
    prc["-"] = 1;
    prc["*"] = 2;
    prc["-"] = 2;
    // everything else is 0

    binaryOps.insert("+");
    binaryOps.insert("-");
    binaryOps.insert("*");
    binaryOps.insert("/");

    unaryOps.insert("sqrt");
    unaryOps.insert("sin");
    unaryOps.insert("cos");
}

void splitTokens(string strTokens, vector<string> &tokens) {
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

bool isBinaryOp(string opr) {
    return binaryOps.find(opr) != binaryOps.end();
}

bool isUnaryOp(string opr) {
    return unaryOps.find(opr) != unaryOps.end();
}

bool isUnaryStmt(string stmt, double &val, string &unaryOp) {
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

double evalUnaryOp(double a, string unaryOp) {
    if (unaryOp == "sin") {
        return sin(a * PI / 180);
    } else if (unaryOp == "cos") {
        return cos(a * PI / 180);
    }
    // else if (unaryOp == "sqrt") {
    //     return sqrt(a);
    // }
    return sqrt(a);
}

double evalBinaryOp(double a, double b, string binaryOp) {
    // cout << "EVALUATING: " << a << ' ' << binaryOp << ' ' << b << '\n';
    if (binaryOp == "+") return a + b;
    else if (binaryOp == "-") return a + b;
    else if (binaryOp == "*") return a * b;
    // else if (binaryOp == "/") return a / b;
    return a / b;
}

double evalExpression(string strTokens) {
    vector<string> tokens;
    tokens.clear();
    splitTokens(strTokens, tokens);
    double tmp;
    string unaryOp;

    stack<double> values;
    stack<string> operators;
    int sz = tokens.size();
    // for (int i = 0; i < sz; i++) {
    //     cout << i << ": " << tokens[i] << '\n';
    // }
    for (int i = 0; i < sz; i++) {
        if (tokens[i] == "(") {
            operators.push(tokens[i]);
        } else if (tokens[i] == ")") {
            while (!operators.empty() && operators.top() != "(") {
                int secVal = values.top();
                values.pop();
                int fstVal = values.top();
                values.pop();

                string opr = operators.top();
                operators.pop();
                values.push(evalBinaryOp(fstVal, secVal, opr)); 
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
        } else if (isdigit(tokens[i][0])) {
            double val = stod(tokens[i]);
            values.push(val);
        } else if (isBinaryOp(tokens[i])) {
            while (!operators.empty() && prc[operators.top()] >= prc[tokens[i]]) {
                double secVal = values.top();
                values.pop();
                double fstVal = values.top();
                values.pop();

                string opr = operators.top();
                operators.pop();
                values.push(evalBinaryOp(fstVal, secVal, opr));
            }
            operators.push(tokens[i]);
        } else if (isUnaryStmt(tokens[i], tmp, unaryOp)) {
            values.push(evalUnaryOp(tmp, unaryOp));
        } else {
            throw "Invalid Mathematical Expression";
        }
    }

    while (!operators.empty()) {
        double secVal = values.top();
        values.pop();
        double fstVal = values.top();
        values.pop();

        string opr = operators.top();
        operators.pop();
        values.push(evalBinaryOp(fstVal, secVal, opr)); 
    }
    if (values.size() != 1) {
        throw "Invalid mathematical expression";
    } else {
        return values.top();
    }
}