#ifndef MINUS_H
#define MINUS_H
#include "Operator.h"
class Minus : public Operator {
public:
    int Evaluate(int,int) override;
};

int Minus::Evaluate(int num, int num1) {
    return num - num1;
}

#endif
