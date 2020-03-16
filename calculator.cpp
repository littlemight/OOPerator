#include "calculator.h"
#include "ui_calculator.h"

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::on_digBtn1_clicked()
{
    QString temp = ui->display->text();
    ui->display->setText(temp + "1");
}

void Calculator::on_digBtn2_clicked()
{
    QString temp = ui->display->text();
    ui->display->setText(temp + "2");
}

void Calculator::on_digBtn3_clicked()
{
    QString temp = ui->display->text();
    ui->display->setText(temp + "3");
}

void Calculator::on_digBtn4_clicked()
{
    QString temp = ui->display->text();
    ui->display->setText(temp + "4");
}

void Calculator::on_digBtn5_clicked()
{
    QString temp = ui->display->text();
    ui->display->setText(temp + "5");
}

void Calculator::on_digBtn6_clicked()
{
    QString temp = ui->display->text();
    ui->display->setText(temp + "6");
}

void Calculator::on_digBtn7_clicked()
{
    QString temp = ui->display->text();
    ui->display->setText(temp + "7");
}

void Calculator::on_digBtn8_clicked()
{
    QString temp = ui->display->text();
    ui->display->setText(temp + "8");
}

void Calculator::on_digBtn9_clicked()
{
    QString temp = ui->display->text();
    ui->display->setText(temp + "9");
}

void Calculator::on_divBtn_clicked()
{
    QString temp = ui->display->text();
    ui->display->setText(temp + "/");
}

void Calculator::on_mulBtn_clicked()
{
    QString temp = ui->display->text();
    ui->display->setText(temp + "x");
}

void Calculator::on_substractBtn_clicked()
{
    QString temp = ui->display->text();
    ui->display->setText(temp + "-");
}

void Calculator::on_addBtn_clicked()
{
    QString temp = ui->display->text();
    ui->display->setText(temp + "+");
}

void Calculator::on_delBtn_clicked()
{
    QString temp = ui->display->text();
    string replace = temp.toStdString();
    replace.pop_back();
    temp = QString::fromStdString(replace);
    ui->display->setText(temp);
}

void Calculator::on_sqrtBtn_clicked()
{
    QString temp = ui->display->text();
    ui->display->setText(temp + "√");
}

void Calculator::on_squareBtn_clicked()
{
    QString temp = ui->display->text();
    ui->display->setText(temp + "^2");
}

void Calculator::on_modBtn_clicked()
{
    QString temp = ui->display->text();
    ui->display->setText(temp + "mod");
}

void Calculator::on_signBtn_clicked()
{
    QString temp = ui->display->text();
    ui->display->setText(temp + "-");
}

void Calculator::on_digBtn0_clicked()
{
    QString temp = ui->display->text();
    ui->display->setText(temp + "0");
}

void Calculator::on_decimalBtn_clicked()
{
    QString temp = ui->display->text();
    ui->display->setText(temp + ".");
}

void Calculator::on_ansBtn_clicked()
{
    AnsProcess();
}

void Calculator::on_evalBtn_clicked()
{
    Evaluate();
}

void Calculator::AnsProcess()
{

}

void Calculator::Evaluate()
{
//    QString QBuffer = ui->display->text();
//    string buffer = QBuffer.toStdString();
//    string result;
//    ParseString(buffer, &result);
//    QString QResult = QString::fromStdString(result);
//    ui->display->setText();
}

void Calculator::on_clearBtn_clicked()
{
    ui->display->setText("0");
}

void Calculator::on_mcBtn_clicked()
{

}

void Calculator::on_mrBtn_clicked()
{

}
