#include "OpNode.h"


OpNode::OpNode(Operator * opt)
{
    val = opt;
    left = nullptr;
    right = nullptr;
    parent = nullptr;
}

OpNode::OpNode(const OpNode &temp) {
    val = temp.val;
    right = temp.right;
    left = temp.left;
    parent = temp.parent;
}

// OpNode::~OpNode()
// {
//     delete left;
//     delete right;
//     delete parent;
//     delete val;
// }

void OpNode::setLeft(OpNode * l) {
    left = l;
}

void OpNode::setRight(OpNode * r) {
    right = r;
}

void OpNode::setParent(OpNode * prnt) {
    parent = prnt;
}

void OpNode::setOperator(Operator *opt) {
    val = opt;
}

OpNode * OpNode::peekLeft() {
    return left;
}

OpNode * OpNode::peekRight() {
    return right;
}

OpNode * OpNode::peekParent() {
    return parent;
}

Operator * OpNode::peekVal() {
    return val;
}

int OpNode::getPri() {
    return val->getPriority();
}