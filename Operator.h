//William Murray
//John Miner
#ifndef OPERATOR_H
#define OPERATOR_H
#include <iostream>

class Operator
{
public:
    virtual int Evaluate() {
        std::cout << "USING OPERATOR EVALUATE()" << std::endl;
        return -1;};
    virtual int Evaluate(int,int) {
        std::cout << "USING OPERATOR EVALUATE(INT,INT)" << std::endl;
        return -1;};
    virtual int getPriority() = 0;
};

#endif  