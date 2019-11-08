#include "header.h"

OpNode::OpNode(Operator &opt)
{
    val = &opt;
}

OpNode::~OpNode()
{
    delete left;
    delete right;
    delete parent;
    delete val;
}

void OpNode::setLeft(OpNode * l) {
    left = l;
}

void OpNode::setRight(OpNode * r) {
    right = r;
}

void OpNode::setParent(OpNode * p) {
    parent = p;
}

void OpNode::setOperator(Operator &opt) {
    val = &opt;
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