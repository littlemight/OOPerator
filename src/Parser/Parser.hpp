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
#include "../Exception/ImbalancedParanthesesException.hpp"
#include "../Exception/InvalidDecimalException.hpp"
#include "../Exception/MoreThanOneOperatorException.hpp"
#include "../Exception/NoParanthesisInUnaryException.hpp"
#include "../Exception/UndefinedOperatorException.hpp"

using namespace std;

/**
 * @brief Class yang berisi method static. digunakan untuk mengevaluasi string yang berisi ekspresi matematika
 */
class Parser
{   
private:
    /**
     * @brief Memisahkan sebuah string yang berisi token-token menjadi vector of tokens
     * @param strTokens String token yang dimasukkan
     * @param tokens Vektor hasil pemisahan
     */
    static void splitTokens(string strTokens, vector<string> &tokens);

    /**
     * @brief Memeriksa apakah sebuah string adalah ekspresi unary yang valid
     * @param stmt Statement uner
     * @param val Nilai ekspresi dalam operator uner yang telah dievaluasi
     * @param unaryOp Operator uner
     * @return Nilai bool yang menyatakan kebeneran ekspresi uner
     */
    static bool isUnaryStmt(string stmt, double &val, string &unaryOp);

    /**
     * @brief Mengambil dua nilai dari stack values dan satu operator dari stack operators, jika kondisi tidak terpenuhi, maka akan dilempar exception
     * @param values Stack yang menyimpan nilai-nilai
     * @param operators Stack yang menyimpan operator dan kurung
     */
    static void evalStack(stack<Expression *> &values, stack<string> &operators);

    /**
     * @brief Mengevaluasi operasi uner unaryOp dengan operand berupa ekspresi a
     * @param a Operan
     * @param unaryOp String operator uner
     * @return Nilai evaluasi dalam bentuk ekspresi
     */
    static Expression* evalUnaryOp(Expression* a, string unaryOp);

    /**
     * @brief Mengevaluasi ekspresi biner dengan operator binaryOp dan operan ekspresi a dan b
     * @param a Operan 1
     * @param b Operan 2
     * @param binaryOp String operator biner
     * @return Nilai evaluasi dalam bentuk ekspresi
     */
    static Expression* evalBinaryOp(Expression* a, Expression* b, string binaryOp);
public:
    Parser();
    ~Parser();

    /**
     * @brief Override dari method evalUnaryOp dengan parameter double, digunakan oleh UnitTest sehingga dibuat public
     * @param a Operan
     * @param unaryOp String operator uner
     * @return Nilai hasil evaluasi
     */
    static double evalUnaryOp(double a, string unaryOp);

    /**
     * @brief Override dari method evalBinaryOp dengan parameter double, digunakan oleh UnitTest sehingga dibuat public
     * @param a Operan 1
     * @param b Operan 2
     * @param binaryOp String operator biner
     * @return Nilai hasil evaluasi
     */
    static double evalBinaryOp(double a, double b, string binaryOp);

    /**
     * @brief Mengevaluasi string ekspresi secara keseluruhan
     * @param strTokens string ekspresi yang akan dievaluasi
     * @return Nilai hasil evaluasi
     */
    static double evalExpression(string strTokens);

    /**
     * @brief Memeriksa apakah sebuah angka adalah angka yang valid
     * @param s String angka yang akan diperiksa kebenaran decimalnya
     * @return Nilai bool yang menyatakan jika angka valid
     */
    static bool isValidNum(string s);

    /**
     * @brief Memeriksa apakah opr merupakan operator biner yang valid
     * @param opr String operator biner
     * @return Nilai bool yang menyatakan jika operator valid
     */
    static bool isBinaryOp(string opr);

    /**
     * @brief Memeriksa apakah opr merupakan operator uner yang valid
     * @param opr String operator uner
     * @return Nilai bool yang menyatakan jika operator valid
     */
    static bool isUnaryOp(string opr);
private:
    /**
     * @brief prc Menyimpan prioritas(precedence) dari setiap operator
     */
    static map<string, int> prc;

    /**
     * @brief binaryOps Menyimpan kumpulan operator biner yang valid
     */
    static set<string> binaryOps;

    /**
     * @brief unaryOps Menyimpan kumpulan operator uner yang valid
     */
    static set<string> unaryOps;

    /**
     * @brief initPrc Inisiasi prc
     * @return map<string, int>
     */
    static map<string, int> initPrc();

    /**
     * @brief initBinaryOps Inisiasi binaryOps
     * @return set<string>
     */
    static set<string> initBinaryOps();

    /**
     * @brief initUnaryOps Inisiasi unaryOps
     * @return set<string>
     */
    static set<string> initUnaryOps();
};
#endif // PARSER_H
