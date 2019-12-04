//William Murray
//John Miner
#include "ParseTree.h"

ParseTree::ParseTree() {
    root = nullptr;
}

ParseTree::~ParseTree() {
    //need delete tree method, to recursively delete each items in the tree
    delete root;
}

Operator * ParseTree::getRoot() {
    return (root == nullptr? nullptr : root->peekVal());
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

void ParseTree::add(OpNode * op) {
    if (getRoot() == nullptr) {
        root = op;
        op->setParent(root);
    } else {
        root == nullptr;
    }
}

int ParseTree::Evaluate() {
   // std::cout << "Evaluating the ParseTree\n";
    return Evaluate(root);
}

int ParseTree::Evaluate(OpNode* node) {
    int partial;
    if (typeid(*node->peekVal()).hash_code() == typeid(Integer).hash_code()) {
        //std::cout << "getting int val\n";
        partial = node->peekVal()->Evaluate();
        //std::cout << "Partial: " << partial << std::endl;
    } else {
        //std::cout << "not a int, so evaluating its sub values\n";
        partial = node->peekVal()->Evaluate(Evaluate(node->peekLeft()),Evaluate(node->peekRight()));
        //std:: cout << "partial: " << partial << std::endl;
    }
    return partial;
}

// void ParseTree::add(OpNode * node,OpNode * addNode ) {
//     //if node to add to is not integer then it is operator,
//     //first check if the node that is being compared to is not a int, i.e. its an operator
//     if (typeid(*node->peekVal()).hash_code() != typeid(Integer).hash_code()) {
//         //if it is a operator then we should check if we are a int
//         if (typeid(*addNode->peekVal()).hash_code() == typeid(Integer).hash_code()) {
            
//         }
//     }
// }
