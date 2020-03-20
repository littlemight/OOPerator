#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>
#include <QMainWindow>
#include "../Parser/Parser.hpp"

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class Calculator; }
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();
//    void ParseString(string buffer, string* result);
//    void AnsProcess();
//    void Evaluate();

private slots:
    void digClicked();
    void oprClicked();
    void unaryOprClicked();
    void eqClicked();
    void clearClicked();
    void decClicked();
//    void on_digBtn1_clicked();
//    void on_digBtn2_clicked();
//    void on_digBtn3_clicked();
//    void on_digBtn4_clicked();
//    void on_digBtn5_clicked();
//    void on_digBtn6_clicked();
//    void on_digBtn7_clicked();
//    void on_digBtn8_clicked();
//    void on_digBtn9_clicked();
//    void on_divBtn_clicked();
//    void on_mulBtn_clicked();
//    void on_substractBtn_clicked();
//    void on_addBtn_clicked();
//    void on_delBtn_clicked();
//    void on_sqrtBtn_clicked();
//    void on_squareBtn_clicked();
//    void on_modBtn_clicked();
//    void on_signBtn_clicked();
//    void on_digBtn0_clicked();
//    void on_decimalBtn_clicked();
//    void on_ansBtn_clicked();
//    void on_evalBtn_clicked();

//    void on_clearBtn_clicked();

//    void on_mcBtn_clicked();

//    void on_mrBtn_clicked();

private:
    double ans;
    string tokens;
    Ui::Calculator *ui;
};
#endif // CALCULATOR_H
