#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>
#include <QMainWindow>
#include <QQueue>
#include "../Parser/Parser.hpp"

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class Calculator; }
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT
private:
    double ans;
    string tokens;
    Ui::Calculator *ui;
    QQueue<double> memo;
public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();

// The corresponding buttons must be linked to these "slots" functions
// Creating a "Button" class and making a virtual onclick function proved to be cumbersome,
// since linking it to these "slots" function is a difficult task done from inside a class
// The linking of the actual button will be done in the Calculator constructor:
// notice that Calculator has attribute "ui", "ui" has the attribute "QPushButton" which we will use to connect these functions
private slots:
    void digClicked();
    void oprClicked();
    void unaryOprClicked();
    void eqClicked();
    void clearClicked();
    void decClicked();
    void ansClicked();
    void mcClicked();
    void mrClicked();
};
#endif // CALCULATOR_H
