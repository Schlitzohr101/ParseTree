#ifndef OPNODE_H
#define OPNODE_H
#include "Operator.h"
class OpNode
{
private:
    OpNode * left;
    OpNode * right;
    OpNode * parent;
    Operator * val;
public:
    OpNode(Operator&);
    ~OpNode();
    void setLeft(OpNode*);
    void setRight(OpNode*);
    void setParent(OpNode*);
    void setOperator(Operator&);
    OpNode* peekLeft();
    OpNode* peekRight();
    OpNode* peekParent();
    Operator* peekVal();
};
#endif