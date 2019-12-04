//William Murray
//John Miner
#include "Exponent.h"
int Exponent::Evaluate(int num, int num1) {
    return int(pow(float(num),float(num1)));
}
int Exponent::getPriority() {
    return 3;
}