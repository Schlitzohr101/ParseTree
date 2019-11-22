#ifndef PLUS_H
#define PLUS_H
#include "Operator.h"
class Plus: public Operator {
public:
    int Evaluate(int,int) override;
};

#endif