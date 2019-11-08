#ifndef INTEGER_H
#define INTEGER_H
#include "Operator.h"
class Integer : public Operator
{
private:
    int num;
public:
    Integer(int val);
    ~Integer();
    int Evaluate();
    int Evaluate(int,int);
};

Integer::Integer(int val)
{
    num = val;
}

Integer::~Integer()
{
}

int Integer::Evaluate() {
    return num;
}

#endif