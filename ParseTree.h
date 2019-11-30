#ifndef PARSETREE_H
#define PARSETREE_H
#include "OpNode.h"
#include "Integer.h"
class ParseTree
{
private:
    OpNode * root;
    bool addToRoot();
public:
    ParseTree();
    ~ParseTree();
    Operator * getRoot();
    int getCount();
    void add(OpNode *);
    void deleteTree();
    int Evaluate();

protected:
    int getCount(OpNode *);
    void deleteNode(OpNode *);
    void swapLeft(OpNode*,OpNode*);
    void swapRight(OpNode*,OpNode*);
    int Evaluate(OpNode*);
};

#endif