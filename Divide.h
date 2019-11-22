#ifndef DIVIDE_H
#define DIVIDE_H
#include "Operator.h"
class Divide : public Operator { 
public:

    int Evaluate(int,int) override;
};

#endif