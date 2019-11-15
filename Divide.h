#ifndef DIVIDE_H
#define DIVIDE_H
#include "Operator.h"
class Divide : public Operator { 
public:

    int Evaluate(int,int) override;
};

int Divide::Evaluate(int num, int num1) {
    return num / num1;
}

#endif