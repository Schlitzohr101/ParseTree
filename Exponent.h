//William Murray
//John Miner
#ifndef EXPONENT_H
#define EXPONENT_H
#include <math.h>
#include "Operator.h"
class Exponent : public Operator {

public:
    virtual int Evaluate(int,int) override;
    virtual int getPriority() override;
};

// int Exponent::Evaluate(int num, int num1) {
//     return int(pow(float(num),float(num1)));
// }
// int Exponent::getPriority() {
//     return 3;
// }

#endif