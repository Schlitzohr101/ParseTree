//William Murray
//John Miner
#ifndef MULTIPLY_H
#define MULTIPLY_H
#include "Operator.h"
class Multiply : public Operator {

public:
    int Evaluate(int,int) override;
    int getPriority() override;
};

#endif