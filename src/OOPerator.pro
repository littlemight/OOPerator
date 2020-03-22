QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Calculator/Calculator.cpp \
    Parser/Parser.cpp \
    Expression/Expression.cpp \
    Expression/TerminalExpression.cpp \
    Expression/Unary/UnaryExpression.cpp \
    Expression/Unary/NegativeExpression.cpp \
    Expression/Unary/SinExpression.cpp \
    Expression/Unary/CosExpression.cpp \
    Expression/Unary/TanExpression.cpp \
    Expression/Unary/SqrtExpression.cpp \
    Expression/Binary/BinaryExpression.cpp \
    Expression/Binary/AddExpression.cpp \
    Expression/Binary/SubstractExpression.cpp \
    Expression/Binary/MultiplyExpression.cpp \
    Expression/Binary/DivideExpression.cpp \
    Expression/Binary/ModExpression.cpp \
    Expression/Binary/PowExpression.cpp \
    main.cpp

HEADERS += \
    Calculator/Calculator.hpp \
    Exception/BaseException.hpp \
    Exception/DivideWithZeroException.hpp \
    Exception/ImbalancedParanthesesException.hpp \
    Exception/InvalidDecimalException.hpp \
    Exception/MoreThanOneOperatorException.hpp \
    Exception/NegativeSqrtException.hpp \
    Exception/ModException.hpp \
    Exception/NoParanthesisInUnaryException.hpp \
    Exception/UndefinedOperatorException.hpp \
    Parser/Parser.hpp \
    Expression/Expression.hpp \
    Expression/TerminalExpression.hpp \
    Expression/Unary/UnaryExpression.hpp \
    Expression/Unary/NegativeExpression.hpp \
    Expression/Unary/SinExpression.hpp \
    Expression/Unary/CosExpression.hpp \
    Expression/Unary/TanExpression.hpp \
    Expression/Unary/SqrtExpression.hpp \
    Expression/Binary/BinaryExpression.hpp \
    Expression/Binary/AddExpression.hpp \
    Expression/Binary/SubstractExpression.hpp \
    Expression/Binary/MultiplyExpression.hpp \
    Expression/Binary/DivideExpression.hpp \
    Expression/Binary/ModExpression.hpp \
    Expression/Binary/PowExpression.hpp \

FORMS += \
    Calculator/calculator.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    README.md
