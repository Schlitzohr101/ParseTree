#ifndef EXPONENT_H
#define EXPONENT_H
#include <math.h>
#include "Operator.h"
class Exponent : public Operator {

public:
    int Evaluate(int,int) override;
};

int Exponent::Evaluate(int num, int num1) {
    return int(pow(float(num),float(num1)));
}

#endif