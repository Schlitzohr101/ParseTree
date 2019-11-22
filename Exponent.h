#ifndef EXPONENT_H
#define EXPONENT_H
#include <math.h>
#include "Operator.h"
class Exponent : public Operator {

public:
    int Evaluate(int,int) override;
};

#endif