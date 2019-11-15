#ifndef INTEGER_H
#define INTEGER_H
#include "Operator.h"
class Integer : public Operator
{
private:
    int num;
public:
    Integer(int val);
    int Evaluate() override;
};

Integer::Integer(int val)
{
    num = val;
}

int Integer::Evaluate() {
    return num;
}

#endif