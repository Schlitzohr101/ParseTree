#ifndef PARSETREE_H
#define PARSETREE_H
#include "OpNode.h"
class ParseTree
{
private:
    OpNode * root;
public:
    ParseTree();
    ~ParseTree();
    Operator * getRoot();
    int getCount();
    void add(Operator *);
    void deleteTree();
protected:
    int getCount(OpNode *);
    void add(OpNode *,OpNode*);
    void deleteNode(OpNode *);
};

#endif