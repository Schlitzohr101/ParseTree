#include "header.h"

ParseTree::ParseTree() {
    root = nullptr;
}

ParseTree::~ParseTree() {
    //need delete tree method, to recursively delete each items in the tree
    delete root;
}

Operator * ParseTree::getRoot() {
    return (root == nullptr? nullptr:root->peekVal());
}

int ParseTree::getCount() {
    return (getRoot() == nullptr? 0 : getCount(root));
}

int ParseTree::getCount(OpNode * node) {
    if (node == nullptr) {
        return 0;
    }
    return 1 + getCount(node->peekLeft()) + getCount(node->peekRight());
}

void ParseTree::add(Operator * op) {
    OpNode * node = new OpNode(op);
    if (getRoot() == nullptr) {
        root = node;
    } else {
        add(root,node);
    }
}

void ParseTree::add(OpNode * node,OpNode * addNode ) {
    //first chedck type of addNode
    if (typeid(addNode).hash_code() == typeid(Integer).hash_code()) {

    }
}
