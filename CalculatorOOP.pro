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
    src/Calculator/Calculator.cpp \
    src/Parser/Parser.cpp \
    src/Expression/Expression.cpp \
    src/Expression/TerminalExpression.cpp \
    src/Expression/Unary/UnaryExpression.cpp \
    src/Expression/Unary/NegativeExpression.cpp \
    src/Expression/Unary/SinExpression.cpp \
    src/Expression/Unary/CosExpression.cpp \
    src/Expression/Unary/TanExpression.cpp \
    src/Expression/Binary/BinaryExpression.cpp \
    src/Expression/Binary/AddExpression.cpp \
    src/Expression/Binary/SubstractExpression.cpp \
    src/Expression/Binary/MultiplyExpression.cpp \
    src/Expression/Binary/DivideExpression.cpp \
    src/Expression/Binary/ModExpression.cpp \
    src/Expression/Binary/PowExpression.cpp \
    src/main.cpp

HEADERS += \
    src/Calculator/Calculator.hpp \
    src/Parser/Parser.hpp \
    src/Expression/Expression.hpp \
    src/Expression/TerminalExpression.hpp \
    src/Expression/Unary/UnaryExpression.hpp \
    src/Expression/Unary/NegativeExpression.hpp \
    src/Expression/Unary/SinExpression.hpp \
    src/Expression/Unary/CosExpression.hpp \
    src/Expression/Unary/TanExpression.hpp \
    src/Expression/Binary/BinaryExpression.hpp \
    src/Expression/Binary/AddExpression.hpp \
    src/Expression/Binary/SubstractExpression.hpp \
    src/Expression/Binary/MultiplyExpression.hpp \
    src/Expression/Binary/DivideExpression.hpp \
    src/Expression/Binary/ModExpression.hpp \
    src/Expression/Binary/PowExpression.hpp \

FORMS += \
    src/Calculator/calculator.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    README.md
