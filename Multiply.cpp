#include "Multiply.h"
int Multiply::Evaluate(int num, int num1) {
    return num * num1;
}
int Multiply::getPriority() {
    return 2;
}
