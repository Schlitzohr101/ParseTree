#ifndef MULTIPLY_H
#define MULTIPLY_H
#include "Operator.h"
class Multiply : public Operator {

public:
    Multiply();
    ~Multiply();
    int Evaluate(int,int);
    int Evaluate();
};

Multiply::Multiply()
{
}

Multiply::~Multiply()
{
}

int Multiply::Evaluate(int num, int num1) {
    return num * num1;
}

#endif