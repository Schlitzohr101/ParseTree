//William Murray
//John Miner
#ifndef MINUS_H
#define MINUS_H
#include "Operator.h"
class Minus : public Operator {
public:
    int Evaluate(int,int) override;
    int getPriority() override;
};

// int Minus::Evaluate(int num, int num1) {
//     return num - num1;
// }
// int Minus::getPriority() {
//     return 1;
// }

#endif
