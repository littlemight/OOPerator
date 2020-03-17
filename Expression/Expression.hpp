#ifndef _EXPRESSION_HPP_
#define _EXPRESSION_HPP_

class Expression {
public:
    Expression() {}
    virtual float solve() = 0;
};

class TerminalExpression : public Expression {
protected:
    float x;
public:
    TerminalExpression(float x);
    float solve();
};

class UnaryExpression : public Expression {
protected:
    Expression* x;
public:
    UnaryExpression(Expression* x);
    virtual float solve() = 0;
};

class BinaryExpression : public Expression {
protected:
    Expression* x;
    Expression* y;
public:
    BinaryExpression(Expression* x, Expression* y);
    virtual float solve() = 0;
};

#endif
