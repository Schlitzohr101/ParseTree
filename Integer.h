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

#endif