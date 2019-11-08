#ifndef MINUS_H
#define MINUS_H
#include "Operator.h"
class Minus : public Operator {
public:
    Minus();
    ~Minus();
    int Evaluate(int,int) override;
    int Evaluate();
};

Minus::Minus() {}

Minus::~Minus()
{
}

int Minus::Evaluate(int num, int num1) {
    return num - num1;
}

#endif
