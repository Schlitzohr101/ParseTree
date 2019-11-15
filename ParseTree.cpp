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
    return 1 + getCount(node.pee)
}