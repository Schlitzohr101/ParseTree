#include "Minus.h"
int Minus::Evaluate(int num, int num1) {
    return num - num1;
}
int Minus::getPriority() {
    return 1;
}