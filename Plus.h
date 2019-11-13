#ifndef PLUS_H
#define PLUS_H
#include "Operator.h"
class Plus: public Operator {
public:
    int Evaluate(int,int) override;
    int Evaluate() override {};
};


int Plus::Evaluate(int num, int num1) {
    return num + num1;
}

#endif