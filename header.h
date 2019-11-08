#ifndef HEADER_H
#define HEADER_H
#include "Operator.h"
#include "Plus.h"
#include "Minus.h"
#include "Multiply.h"
#include "Divide.h"
#include "Exponent.h"
#include "Integer.h"
#include "OpNode.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

typedef Operator * (*OptfuncPtr)();


#endif