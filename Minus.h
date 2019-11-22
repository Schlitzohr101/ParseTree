#ifndef MINUS_H
#define MINUS_H
#include "Operator.h"
class Minus : public Operator {
public:
    int Evaluate(int,int) override;
};

#endif
