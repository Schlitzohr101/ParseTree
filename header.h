#ifndef HEADER_H
#define HEADER_H
//Main header file used for inculeds of all dependencies
#include "Plus.h" //No need to have Operator.h here as 
#include "Minus.h"//Each of the inheriting Class include the file
#include "Multiply.h"//May be poor performance, but Operator is small
#include "Divide.h" 
#include "Exponent.h"
#include "ParseTree.h"
#include <string>
#include <vector>
#include <stack>
#include <cstring>
#include <typeinfo>
#include <bits/stdc++.h> 


using namespace std;

//may be used later for a map of pointers
typedef Operator * (*OptfuncPtr)();

int charToInt(char);

int getMultDigit(string, int&);

vector<OpNode *> parsePostFix(vector<OpNode*>);

OpNode* constructTree(vector<OpNode*>);

#endif