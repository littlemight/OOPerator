#include "Calculator.hpp"
#include "ui_calculator.h"

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
    ui->display->setText(QString::number(0));
    ui->errorLog->setText(QString::fromStdString("Bukan Kalkulator Scientific"));

    memo = {};
    tokens.clear();
    ans = 0;

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
            connect(*it, SIGNAL(released()), this, SLOT(acClicked()));
        } else if (txt == ".") {
            connect(*it, SIGNAL(released()), this, SLOT(decClicked()));
        } else if (txt == "ans") {
            connect(*it, SIGNAL(released()), this, SLOT(ansClicked()));
        } else if (txt == "⌫") {
            connect(*it, SIGNAL(released()), this, SLOT(delClicked()));
        } else if (txt == "MC") {
            connect(*it, SIGNAL(released()), this, SLOT(mcClicked()));
        } else if (txt == "MR") {
            connect(*it, SIGNAL(released()), this, SLOT(mrClicked()));
        } else if (txt  == "CLRSCR") {
            connect(*it, SIGNAL(released()), this, SLOT(clrscrClicked()));
        } else if (isdigit(txt.back())) {
            connect(*it, SIGNAL(released()), this, SLOT(digClicked()));
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
        this->tokens = to_string(answer);
        this->ans = answer;
    } catch (const char* e) {
        this->ui->errorLog->setText(QString::fromStdString(e));
    } catch (BaseException* e) {
        this->ui->errorLog->setText(QString::fromStdString(e->getMessage()));
    }
}


void Calculator::clrscrClicked() {
    this->tokens.clear();
    ui->display->setText(QString::number(0));
    ui->errorLog->setText(QString::fromStdString("Bukan Kalkulator Scientific"));
}

void Calculator::acClicked() {
    clrscrClicked();
    this->ans = 0;
    memo = {};
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
    // ASUMSI: yang di push itu nilai yang di DISPLAY, bukan yang di ans
    QString dspTxt = ui->display->text();

    try {
        double val = Parser::evalExpression(this->tokens);
        this->ans = val;
        this->memo.push(val);
        ui->errorLog->setText(QString::fromStdString(to_string(val) + " telah disimpan di memory"));
    } catch (BaseException* e) {
        ui->errorLog->setText(QString::fromStdString(e->getMessage()));
    }
}

void Calculator::mrClicked() {
    QString dspTxt = ui->display->text();
    if (this->memo.empty()){
        ui->errorLog->setText(QString::fromStdString("Tidak ada nilai yang disimpan di history"));
    } else{
        double val = this->memo.front();
        this->memo.pop();
        if (this->tokens.empty()) {
            ui->display->setText(QString::number(val));
            this->tokens = to_string(val);
        } else {
            ui->display->setText(dspTxt + QString::number(val));
            if (!isdigit(this->tokens.back()) && this->tokens.back() != '.') {
                this->tokens += " " + to_string(val);
            } else {
                this->tokens += to_string(val);
            }
        }
    }
}

void Calculator::delClicked()
{
    QString dspTxt = ui->display->text();
    if (!this->tokens.empty()){
        if (dspTxt.length() == 1){
            dspTxt = "0";
            ui->display->setText(dspTxt);
            this->tokens = "";
        }
        else {
            dspTxt.chop(1);
            while (this->tokens.back() == ' '){
                this->tokens.pop_back();
            }
            this->tokens.pop_back();
            ui->display->setText(dspTxt);
        }
    }
}
