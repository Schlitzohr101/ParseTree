#ifndef DIVIDE_H
#define DIVIDE_H
#include "Operator.h"
class Divide : public Operator { 
public:
    Divide();
    ~Divide();
    int Evaluate(int,int);
    int Evaluate();
};

Divide::Divide()
{

}

Divide::~Divide()
{
}

int Divide::Evaluate(int num, int num1) {
    return num / num1;
}

#endif