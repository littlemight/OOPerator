/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *digBtn5;
    QPushButton *mcBtn;
    QPushButton *cosBtn;
    QPushButton *digBtn3;
    QPushButton *closeBrBtn;
    QPushButton *sqrtBtn;
    QPushButton *tanBtn;
    QPushButton *ansBtn;
    QPushButton *digBtn0;
    QPushButton *digBtn4;
    QPushButton *divBtn;
    QPushButton *mrBtn;
    QPushButton *delBtn;
    QPushButton *modBtn;
    QPushButton *digBtn1;
    QPushButton *powBtn;
    QPushButton *digBtn6;
    QLineEdit *errorLog;
    QPushButton *evalBtn;
    QPushButton *digBtn8;
    QPushButton *sinBtn;
    QPushButton *addBtn;
    QPushButton *decimalBtn;
    QPushButton *substractBtn;
    QPushButton *mulBtn;
    QPushButton *openBrBtn;
    QPushButton *digBtn7;
    QLineEdit *display;
    QPushButton *digBtn2;
    QPushButton *digBtn9;
    QPushButton *clrscrBtn;
    QPushButton *clearBtn;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(615, 469);
        Calculator->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background: #000000\n"
"}"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        digBtn5 = new QPushButton(centralwidget);
        digBtn5->setObjectName(QString::fromUtf8("digBtn5"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(digBtn5->sizePolicy().hasHeightForWidth());
        digBtn5->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Raleway Medium"));
        font.setPointSize(16);
        font.setBold(false);
        font.setWeight(50);
        digBtn5->setFont(font);
        digBtn5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #22333B;\n"
"	color: #ffffff;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(digBtn5, 7, 1, 1, 1);

        mcBtn = new QPushButton(centralwidget);
        mcBtn->setObjectName(QString::fromUtf8("mcBtn"));
        sizePolicy.setHeightForWidth(mcBtn->sizePolicy().hasHeightForWidth());
        mcBtn->setSizePolicy(sizePolicy);
        mcBtn->setFont(font);
        mcBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #474350;\n"
"	color: #ffffff;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(mcBtn, 5, 1, 1, 1);

        cosBtn = new QPushButton(centralwidget);
        cosBtn->setObjectName(QString::fromUtf8("cosBtn"));
        sizePolicy.setHeightForWidth(cosBtn->sizePolicy().hasHeightForWidth());
        cosBtn->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Raleway Medium"));
        font1.setPointSize(14);
        cosBtn->setFont(font1);
        cosBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: rgb(85, 85, 255);\n"
"	color: #ffffff;\n"
"}"));

        gridLayout->addWidget(cosBtn, 3, 1, 1, 1);

        digBtn3 = new QPushButton(centralwidget);
        digBtn3->setObjectName(QString::fromUtf8("digBtn3"));
        sizePolicy.setHeightForWidth(digBtn3->sizePolicy().hasHeightForWidth());
        digBtn3->setSizePolicy(sizePolicy);
        digBtn3->setFont(font);
        digBtn3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #22333B;\n"
"	color: #ffffff;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(digBtn3, 8, 2, 1, 1);

        closeBrBtn = new QPushButton(centralwidget);
        closeBrBtn->setObjectName(QString::fromUtf8("closeBrBtn"));
        sizePolicy.setHeightForWidth(closeBrBtn->sizePolicy().hasHeightForWidth());
        closeBrBtn->setSizePolicy(sizePolicy);
        closeBrBtn->setFont(font1);
        closeBrBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: rgb(85, 0, 127);\n"
"	color: #ffffff;\n"
"}"));

        gridLayout->addWidget(closeBrBtn, 3, 4, 1, 1);

        sqrtBtn = new QPushButton(centralwidget);
        sqrtBtn->setObjectName(QString::fromUtf8("sqrtBtn"));
        sizePolicy.setHeightForWidth(sqrtBtn->sizePolicy().hasHeightForWidth());
        sqrtBtn->setSizePolicy(sizePolicy);
        sqrtBtn->setFont(font);
        sqrtBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #f8c414;\n"
"	color: #000000;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(sqrtBtn, 6, 4, 1, 1);

        tanBtn = new QPushButton(centralwidget);
        tanBtn->setObjectName(QString::fromUtf8("tanBtn"));
        sizePolicy.setHeightForWidth(tanBtn->sizePolicy().hasHeightForWidth());
        tanBtn->setSizePolicy(sizePolicy);
        tanBtn->setFont(font1);
        tanBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: rgb(85, 85, 255);\n"
"	color: #ffffff;\n"
"}"));

        gridLayout->addWidget(tanBtn, 3, 2, 1, 1);

        ansBtn = new QPushButton(centralwidget);
        ansBtn->setObjectName(QString::fromUtf8("ansBtn"));
        sizePolicy.setHeightForWidth(ansBtn->sizePolicy().hasHeightForWidth());
        ansBtn->setSizePolicy(sizePolicy);
        ansBtn->setFont(font);
        ansBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #f8c414;\n"
"	color: #000000;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(ansBtn, 9, 3, 1, 1);

        digBtn0 = new QPushButton(centralwidget);
        digBtn0->setObjectName(QString::fromUtf8("digBtn0"));
        sizePolicy.setHeightForWidth(digBtn0->sizePolicy().hasHeightForWidth());
        digBtn0->setSizePolicy(sizePolicy);
        digBtn0->setFont(font);
        digBtn0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #22333B;\n"
"	color: #ffffff;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(digBtn0, 9, 1, 1, 1);

        digBtn4 = new QPushButton(centralwidget);
        digBtn4->setObjectName(QString::fromUtf8("digBtn4"));
        sizePolicy.setHeightForWidth(digBtn4->sizePolicy().hasHeightForWidth());
        digBtn4->setSizePolicy(sizePolicy);
        digBtn4->setFont(font);
        digBtn4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #22333B;\n"
"	color: #ffffff;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(digBtn4, 7, 0, 1, 1);

        divBtn = new QPushButton(centralwidget);
        divBtn->setObjectName(QString::fromUtf8("divBtn"));
        sizePolicy.setHeightForWidth(divBtn->sizePolicy().hasHeightForWidth());
        divBtn->setSizePolicy(sizePolicy);
        divBtn->setFont(font);
        divBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #f8c414;\n"
"	color: #000000;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(divBtn, 5, 3, 1, 1);

        mrBtn = new QPushButton(centralwidget);
        mrBtn->setObjectName(QString::fromUtf8("mrBtn"));
        sizePolicy.setHeightForWidth(mrBtn->sizePolicy().hasHeightForWidth());
        mrBtn->setSizePolicy(sizePolicy);
        mrBtn->setFont(font);
        mrBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #474350;\n"
"	color: #ffffff;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(mrBtn, 5, 2, 1, 1);

        delBtn = new QPushButton(centralwidget);
        delBtn->setObjectName(QString::fromUtf8("delBtn"));
        sizePolicy.setHeightForWidth(delBtn->sizePolicy().hasHeightForWidth());
        delBtn->setSizePolicy(sizePolicy);
        delBtn->setFont(font);
        delBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #f8c414;\n"
"	color: #000000;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(delBtn, 5, 4, 1, 1);

        modBtn = new QPushButton(centralwidget);
        modBtn->setObjectName(QString::fromUtf8("modBtn"));
        sizePolicy.setHeightForWidth(modBtn->sizePolicy().hasHeightForWidth());
        modBtn->setSizePolicy(sizePolicy);
        modBtn->setFont(font);
        modBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #f8c414;\n"
"	color: #000000;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(modBtn, 8, 4, 1, 1);

        digBtn1 = new QPushButton(centralwidget);
        digBtn1->setObjectName(QString::fromUtf8("digBtn1"));
        sizePolicy.setHeightForWidth(digBtn1->sizePolicy().hasHeightForWidth());
        digBtn1->setSizePolicy(sizePolicy);
        digBtn1->setFont(font);
        digBtn1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #22333B;\n"
"	color: #ffffff;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(digBtn1, 8, 0, 1, 1);

        powBtn = new QPushButton(centralwidget);
        powBtn->setObjectName(QString::fromUtf8("powBtn"));
        sizePolicy.setHeightForWidth(powBtn->sizePolicy().hasHeightForWidth());
        powBtn->setSizePolicy(sizePolicy);
        powBtn->setFont(font);
        powBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #f8c414;\n"
"	color: #000000;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(powBtn, 7, 4, 1, 1);

        digBtn6 = new QPushButton(centralwidget);
        digBtn6->setObjectName(QString::fromUtf8("digBtn6"));
        sizePolicy.setHeightForWidth(digBtn6->sizePolicy().hasHeightForWidth());
        digBtn6->setSizePolicy(sizePolicy);
        digBtn6->setFont(font);
        digBtn6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #22333B;\n"
"	color: #ffffff;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(digBtn6, 7, 2, 1, 1);

        errorLog = new QLineEdit(centralwidget);
        errorLog->setObjectName(QString::fromUtf8("errorLog"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(errorLog->sizePolicy().hasHeightForWidth());
        errorLog->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Raleway SemiBold"));
        font2.setPointSize(14);
        errorLog->setFont(font2);
        errorLog->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background: #04151F;\n"
"	color: #f8c414;\n"
"	border: transparent;\n"
"	padding: 10px;\n"
"}"));
        errorLog->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        errorLog->setReadOnly(true);

        gridLayout->addWidget(errorLog, 0, 0, 1, 5);

        evalBtn = new QPushButton(centralwidget);
        evalBtn->setObjectName(QString::fromUtf8("evalBtn"));
        sizePolicy.setHeightForWidth(evalBtn->sizePolicy().hasHeightForWidth());
        evalBtn->setSizePolicy(sizePolicy);
        evalBtn->setFont(font);
        evalBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #f8c414;\n"
"	color: #000000;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(evalBtn, 9, 4, 1, 1);

        digBtn8 = new QPushButton(centralwidget);
        digBtn8->setObjectName(QString::fromUtf8("digBtn8"));
        sizePolicy.setHeightForWidth(digBtn8->sizePolicy().hasHeightForWidth());
        digBtn8->setSizePolicy(sizePolicy);
        digBtn8->setFont(font);
        digBtn8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #22333B;\n"
"	color: #ffffff;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(digBtn8, 6, 1, 1, 1);

        sinBtn = new QPushButton(centralwidget);
        sinBtn->setObjectName(QString::fromUtf8("sinBtn"));
        sizePolicy.setHeightForWidth(sinBtn->sizePolicy().hasHeightForWidth());
        sinBtn->setSizePolicy(sizePolicy);
        sinBtn->setFont(font1);
        sinBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: rgb(85, 85, 255);\n"
"	color: #ffffff;\n"
"}"));

        gridLayout->addWidget(sinBtn, 3, 0, 1, 1);

        addBtn = new QPushButton(centralwidget);
        addBtn->setObjectName(QString::fromUtf8("addBtn"));
        sizePolicy.setHeightForWidth(addBtn->sizePolicy().hasHeightForWidth());
        addBtn->setSizePolicy(sizePolicy);
        addBtn->setFont(font);
        addBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #f8c414;\n"
"	color: #000000;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(addBtn, 8, 3, 1, 1);

        decimalBtn = new QPushButton(centralwidget);
        decimalBtn->setObjectName(QString::fromUtf8("decimalBtn"));
        sizePolicy.setHeightForWidth(decimalBtn->sizePolicy().hasHeightForWidth());
        decimalBtn->setSizePolicy(sizePolicy);
        decimalBtn->setFont(font);
        decimalBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #22333B;\n"
"	color: #ffffff;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(decimalBtn, 9, 2, 1, 1);

        substractBtn = new QPushButton(centralwidget);
        substractBtn->setObjectName(QString::fromUtf8("substractBtn"));
        sizePolicy.setHeightForWidth(substractBtn->sizePolicy().hasHeightForWidth());
        substractBtn->setSizePolicy(sizePolicy);
        substractBtn->setFont(font);
        substractBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #f8c414;\n"
"	color: #000000;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(substractBtn, 7, 3, 1, 1);

        mulBtn = new QPushButton(centralwidget);
        mulBtn->setObjectName(QString::fromUtf8("mulBtn"));
        sizePolicy.setHeightForWidth(mulBtn->sizePolicy().hasHeightForWidth());
        mulBtn->setSizePolicy(sizePolicy);
        mulBtn->setFont(font);
        mulBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #f8c414;\n"
"	color: #000000;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(mulBtn, 6, 3, 1, 1);

        openBrBtn = new QPushButton(centralwidget);
        openBrBtn->setObjectName(QString::fromUtf8("openBrBtn"));
        sizePolicy.setHeightForWidth(openBrBtn->sizePolicy().hasHeightForWidth());
        openBrBtn->setSizePolicy(sizePolicy);
        openBrBtn->setFont(font1);
        openBrBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: rgb(85, 0, 127);\n"
"	color: #ffffff;\n"
"}"));

        gridLayout->addWidget(openBrBtn, 3, 3, 1, 1);

        digBtn7 = new QPushButton(centralwidget);
        digBtn7->setObjectName(QString::fromUtf8("digBtn7"));
        sizePolicy.setHeightForWidth(digBtn7->sizePolicy().hasHeightForWidth());
        digBtn7->setSizePolicy(sizePolicy);
        digBtn7->setFont(font);
        digBtn7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #22333B;\n"
"	color: #ffffff;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(digBtn7, 6, 0, 1, 1);

        display = new QLineEdit(centralwidget);
        display->setObjectName(QString::fromUtf8("display"));
        sizePolicy.setHeightForWidth(display->sizePolicy().hasHeightForWidth());
        display->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setFamily(QString::fromUtf8("Raleway Medium"));
        font3.setPointSize(24);
        font3.setBold(true);
        font3.setWeight(75);
        display->setFont(font3);
        display->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: #f8c414;\n"
"	padding: 10px;\n"
"	border: transparent;\n"
"}"));
        display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        display->setReadOnly(true);

        gridLayout->addWidget(display, 2, 0, 1, 5);

        digBtn2 = new QPushButton(centralwidget);
        digBtn2->setObjectName(QString::fromUtf8("digBtn2"));
        sizePolicy.setHeightForWidth(digBtn2->sizePolicy().hasHeightForWidth());
        digBtn2->setSizePolicy(sizePolicy);
        digBtn2->setFont(font);
        digBtn2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #22333B;\n"
"	color: #ffffff;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(digBtn2, 8, 1, 1, 1);

        digBtn9 = new QPushButton(centralwidget);
        digBtn9->setObjectName(QString::fromUtf8("digBtn9"));
        sizePolicy.setHeightForWidth(digBtn9->sizePolicy().hasHeightForWidth());
        digBtn9->setSizePolicy(sizePolicy);
        digBtn9->setFont(font);
        digBtn9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #22333B;\n"
"	color: #ffffff;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(digBtn9, 6, 2, 1, 1);

        clrscrBtn = new QPushButton(centralwidget);
        clrscrBtn->setObjectName(QString::fromUtf8("clrscrBtn"));
        sizePolicy.setHeightForWidth(clrscrBtn->sizePolicy().hasHeightForWidth());
        clrscrBtn->setSizePolicy(sizePolicy);
        clrscrBtn->setFont(font);
        clrscrBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(0, 0, 127);\n"
"	color: #ffffff;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(clrscrBtn, 9, 0, 1, 1);

        clearBtn = new QPushButton(centralwidget);
        clearBtn->setObjectName(QString::fromUtf8("clearBtn"));
        sizePolicy.setHeightForWidth(clearBtn->sizePolicy().hasHeightForWidth());
        clearBtn->setSizePolicy(sizePolicy);
        clearBtn->setFont(font);
        clearBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #AA0000;\n"
"	color: #000000;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(clearBtn, 5, 0, 1, 1);

        Calculator->setCentralWidget(centralwidget);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        digBtn5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        mcBtn->setText(QCoreApplication::translate("Calculator", "MC", nullptr));
        cosBtn->setText(QCoreApplication::translate("Calculator", "cos", nullptr));
        digBtn3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        closeBrBtn->setText(QCoreApplication::translate("Calculator", ")", nullptr));
        sqrtBtn->setText(QCoreApplication::translate("Calculator", "sqrt", nullptr));
        tanBtn->setText(QCoreApplication::translate("Calculator", "tan", nullptr));
        ansBtn->setText(QCoreApplication::translate("Calculator", "ans", nullptr));
        digBtn0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        digBtn4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        divBtn->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        mrBtn->setText(QCoreApplication::translate("Calculator", "MR", nullptr));
        delBtn->setText(QCoreApplication::translate("Calculator", "\342\214\253", nullptr));
        modBtn->setText(QCoreApplication::translate("Calculator", "mod", nullptr));
        digBtn1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        powBtn->setText(QCoreApplication::translate("Calculator", "^", nullptr));
        digBtn6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        evalBtn->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        digBtn8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        sinBtn->setText(QCoreApplication::translate("Calculator", "sin", nullptr));
        addBtn->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        decimalBtn->setText(QCoreApplication::translate("Calculator", ".", nullptr));
        substractBtn->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        mulBtn->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        openBrBtn->setText(QCoreApplication::translate("Calculator", "(", nullptr));
        digBtn7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        display->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        digBtn2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        digBtn9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        clrscrBtn->setText(QCoreApplication::translate("Calculator", "CLRSCR", nullptr));
        clearBtn->setText(QCoreApplication::translate("Calculator", "AC", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
