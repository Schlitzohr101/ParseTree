//William Murray
//John Miner
#ifndef DIVIDE_H
#define DIVIDE_H
#include "Operator.h"
class Divide : public Operator { 
public:

    int Evaluate(int,int) override;
    int getPriority() override;
};

// int Divide::Evaluate(int num, int num1) {
//     return num / num1;
// }

// int Divide::getPriority() {
//     return 2;
// }

#endif