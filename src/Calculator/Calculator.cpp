#include "Calculator.hpp"
#include "ui_calculator.h"

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
    ui->display->setText(QString::number(0));
    ui->errorLog->setText(QString::fromStdString("Bukan Kalkulator Scientific"));
    memo.clear();
    tokens = "";
    ans = 0;

    // link the digit buttons to functions
    QPushButton *digBtns[10];
    for (int i = 0; i < 10; i++) {
        QString btnName = "digBtn" + QString::number(i);
        digBtns[i] = this->findChild<QPushButton *>(btnName);
        connect(digBtns[i], SIGNAL(released()), this, SLOT(digClicked()));
    }

    // link the non digit buttons to their corresponding functions
    QList<QPushButton *> allNonDigit = this->findChildren<QPushButton *>();
    for (QList<QPushButton *>::iterator it = allNonDigit.begin(); it != allNonDigit.end(); it++) {
        string txt = (*it)->text().toStdString();
        if (Parser::isUnaryOp(txt)) {
            connect(*it, SIGNAL(released()), this, SLOT(unaryOprClicked()));
        } else if (Parser::isBinaryOp(txt) || txt == "(" || txt == ")") {
            connect(*it, SIGNAL(released()), this, SLOT(oprClicked()));
        } else if (txt == "=") {
            connect(*it, SIGNAL(released()), this, SLOT(eqClicked()));
        } else if (txt == "AC") {
            connect(*it, SIGNAL(released()), this, SLOT(clearClicked()));
        } else if (txt == ".") {
            connect(*it, SIGNAL(released()), this, SLOT(decClicked()));
        } else if (txt == "ans") {
            connect(*it, SIGNAL(released()), this, SLOT(ansClicked()));
        }
    }
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::digClicked() {
    QPushButton *btn = (QPushButton *)sender();
    QString btnTxt = btn->text();
    QString dspTxt = ui->display->text();
    if (this->tokens.empty()) {
        ui->display->setText(btnTxt);
        this->tokens += btnTxt.toStdString();
    } else {
        ui->display->setText(dspTxt + btnTxt);
        if (!isdigit(this->tokens.back()) && this->tokens.back() != '.') {
            this->tokens += " " + btnTxt.toStdString();
        } else {
            this->tokens += btnTxt.toStdString();
        }
    }
}

void Calculator::oprClicked() {
    QPushButton *btn = (QPushButton *)sender();
    QString btnTxt = btn->text();
    QString dspTxt = ui->display->text();
    if (this->tokens.empty()) {
        ui->display->setText(btnTxt);
        this->tokens += btnTxt.toStdString();
    } else {
        ui->display->setText(dspTxt + btnTxt);
        this->tokens += " " + btnTxt.toStdString();
    }
}


void Calculator::unaryOprClicked() {
    QPushButton *btn = (QPushButton *)sender();
    QString btnTxt = btn->text();
    QString dspTxt = ui->display->text();
    if (this->tokens.empty()) {
        ui->display->setText(btnTxt + QString::fromStdString("("));
        this->tokens += btnTxt.toStdString() + " " + "(";
    } else {
        ui->display->setText(dspTxt + btnTxt + QString::fromStdString("("));
        this->tokens += " " + btnTxt.toStdString() + " " + "(";
    }
}

void Calculator::eqClicked() {
    try {
        double answer = Parser::evalExpression(this->tokens);
        this->ui->errorLog->setText(this->ui->display->text());
        this->ui->display->setText(QString::number(answer, 'g', 16));
        this->tokens.clear();
        this->ans = answer;
    } catch (const char* e) {
//        this->ui->errorLog->setText(QString::fromStdString(tokens));
        this->ui->errorLog->setText(QString::fromStdString(e));
    }
}

void Calculator::clearClicked() {
    this->ans = 0;
    this->tokens.clear();
    // this->memory = {};
    ui->display->setText(QString::number(0));
    ui->errorLog->setText(QString::fromStdString("Bukan Kalkulator Scientific"));
}

void Calculator::decClicked() {
    QString dspTxt = ui->display->text();
    if (this->tokens.empty()) {
        this->tokens += ".";
        this->ui->display->setText(QString::fromStdString("."));
    } else {
        this->ui->display->setText(dspTxt + QString::fromStdString("."));
        if (isdigit(this->tokens.back())) {
            this->tokens += ".";
        } else {
            this->tokens += " .";
        }
    }
}

void Calculator::ansClicked() {
    QString dspTxt = ui->display->text();
    QString ansStr = QString::number(ans);
    if (this->tokens.empty()) {
        ui->display->setText(ansStr);
        this->tokens += to_string(ans);
    } else {
        ui->display->setText(dspTxt + ansStr);
        if (!isdigit(this->tokens.back()) && this->tokens.back() != '.') {
            this->tokens += " " + to_string(ans);
        } else {
            this->tokens += to_string(ans);
        }
    }
}

void Calculator::mcClicked() {

}

void Calculator::mrClicked() {

}
