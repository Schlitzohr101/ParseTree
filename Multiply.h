#ifndef MULTIPLY_H
#define MULTIPLY_H
#include "Operator.h"
class Multiply : public Operator {

public:
    int Evaluate(int,int) override;
};

int Multiply::Evaluate(int num, int num1) {
    return num * num1;
}

#endif