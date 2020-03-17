#include <iostream>
#include <string>
#include <cmath>
#include "AddExpression.hpp"
#include "SubstractExpression.hpp"
#include "DivideExpression.hpp"
#include "MultiplyExpression.hpp"
#include "ModExpression.hpp"

using namespace std;

// Cara compile : g++ parser.cpp SubstractExpression.cpp AddExpression.cpp Expression.cpp DivideExpression.cpp MultiplyExpression.cpp ModExpression.cpp

float StrToNum(string s){
    float result = 0; 
    float afterComma = 0;
    bool comma = false;
    int countComma = 0;
    for (char c: s){
        if ((c >= '0') && (c <= '9')){
            if (!comma){
                result = result * 10 + (c - '0');
            }
            else {
                afterComma = afterComma * 10 + (c - '0');
                countComma++; 
            }
        }
        else if (c == '.') {
            comma = true;
            countComma++;   
        }
        else {
            // Throw Exception
        }
    }
    result += afterComma * pow(10, -1 * countComma);
    return result;
}

void ConvertString(string s, float *result){
    *result = StrToNum(s);
}

bool IsOperator(char c){
    return ((c == '+') || (c == '-') || (c == 'x') || (c == '/') || c == '%');
}

bool IsNull(char c){
    return c == '\0';
}

void Evaluate(string buffer, float* finalVal){
    string a1; string a2; char op;
    int i = 0;
    while(!IsOperator(buffer[i]) && !IsNull(buffer[i])){
        a1.push_back(buffer[i]);
        i++;
    }
    op = buffer[i]; i++;
    while (!IsOperator(buffer[i]) && !IsNull(buffer[i])){
        a2.push_back(buffer[i]);
        i++;
    }
    cout << buffer << endl;
    cout << a1 << endl;
    cout << a2 << endl;
    float r1, r2;
    ConvertString(a1, &r1);
    ConvertString(a2, &r2);
    if (IsOperator(op)){
        if (op == '+'){
            AddExpression* value = new AddExpression(new TerminalExpression(r1), new TerminalExpression(r2));
            cout << a1 << " + " << a2 << " = " << value->solve() << endl;
            *finalVal = value->solve();
        }
        else if (op == '-'){
            SubstractExpression* value = new SubstractExpression(new TerminalExpression(r1), new TerminalExpression(r2));
            cout << a1 << " - " << a2 << " = " << value->solve() << endl;
            *finalVal = value->solve();
        }
        else if (op == 'x'){
            MultiplyExpression* value = new MultiplyExpression(new TerminalExpression(r1), new TerminalExpression(r2));
            cout << a1 << " x " << a2 << " = " << value->solve() << endl;
            *finalVal = value->solve();
        }
        else if (op == '/'){
            DivideExpression* value = new DivideExpression(new TerminalExpression(r1), new TerminalExpression(r2));
            cout << a1 << " / " << a2 << " = " << value->solve() << endl;
            *finalVal = value->solve();
        }
        else if (op == '%'){
            ModExpression* value = new ModExpression(new TerminalExpression(r1), new TerminalExpression(r2));
            cout << a1 << " mod " << a2 << " = " << value->solve() << endl;
            *finalVal = value->solve();
        }
    }
    else {
        // Throw Exception
    }
}

int main(){
    string buffer1 = "100x200.5";
    string buffer2 = "100/200.5";
    string buffer3 = "100+200.5";
    string buffer4 = "100-200.5";
    string buffer5 = "100%20";
    float value;
    cout << "Case 1" << endl; Evaluate(buffer1, &value);
    cout << "Case 2" << endl; Evaluate(buffer2, &value);
    cout << "Case 3" << endl; Evaluate(buffer3, &value);
    cout << "Case 4" << endl; Evaluate(buffer4, &value);
    cout << "Case 5" << endl; Evaluate(buffer5, &value);
}