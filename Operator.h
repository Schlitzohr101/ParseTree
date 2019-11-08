#ifndef OPERATOR_H
#define OPERATOR_H

class Operator
{
public:
    virtual int Evaluate() =0;
    virtual int Evaluate(int,int) =0;
};

#endif