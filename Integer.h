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
    int getPriority() {
        std::cout << "you have seemed to call priority on a integer\n";
        return -1;
    };
};

// Integer::Integer(int val)
// {
//     num = val;
// }

// int Integer::Evaluate() {
//     return num;
// }

#endif