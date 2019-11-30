#include "header.h"
int main()
{
    cout << "help" << endl;
    ParseTree tree;
    string word = "3+5*16/2^2-6";
    Operator *optAr[word.length()];
    vector<OpNode*> nodeAr;
    //for (int i = word.length()-1; i >= 0 ; i--)
    for (int i = 0; i < word.length(); i++)
    {
        switch (word[i])
        {
        case '+':
            //cout << "pushing back a plus" << endl;
            nodeAr.push_back(new OpNode(new Plus()));
            break;
        case '-':
            //cout << "pushing back a minus" << endl;
            nodeAr.push_back(new OpNode(new Minus()));
            break;
        case '*':
            //cout << "pushing back a mult" << endl;
            nodeAr.push_back(new OpNode(new Multiply()));
            break;
        case '/':
            //cout << "pushing back a divide" << endl;
            nodeAr.push_back(new OpNode(new Divide()));
            break;
        case '^':
            //cout << "pushing back a exponent" << endl;
            nodeAr.push_back(new OpNode(new Exponent()));
            break;
        default:
            //cout << "pushing back a Int" << endl;
            nodeAr.push_back(new OpNode(new Integer(getMultDigit(word,i))));
            break;
        }
    }
    cout << "Entering the parse for PostFix notation\n";
    nodeAr = parsePostFix(nodeAr);
    OpNode * temp = constructTree(nodeAr);
    cout << "That's cool, but does temp have the minus value put in it?\n" << typeid(*(temp->peekVal())).name() << endl;
    cout << "Fantastic, lets add the connected nodes to the tree\n";
    tree.add(temp);
    cout << "Successfully added\n";
    cout << "So what value does it get when Evaluate is called: " << tree.Evaluate() << endl;


    return 0;
}

int charToInt(char c)
{
    int toReturn = -1;
    switch (c)
    {
    case '0':
        toReturn = 0;
    case '1':
        toReturn = 1;
        break;
    case '2':
        toReturn = 2;
        break;
    case '3':
        toReturn = 3;
        break;
    case '4':
        toReturn = 4;
        break;
    case '5':
        toReturn = 5;
        break;
    case '6':
        toReturn = 6;
        break;
    case '7':
        toReturn = 7;
        break;
    case '8':
        toReturn = 8;
        break;
    case '9':
        toReturn = 9;
        break;
    default: 
        break;
    }
    return toReturn;
}

int getMultDigit(string word, int& i) {
    string toInt = "";
    //cout << "current index" << i << " ";
    toInt += word[i];
    //cout << "   toInt : " << toInt<<endl;
    while (i+1 < word.length() && (charToInt(word[i+1]) > 0))
    {
        //cout << "then we add : " << word[i+1];
        toInt += word[i+1];
        i++;
        //cout << " to " << toInt <<endl;
    }
    
    //reverse(toInt.begin(),toInt.end());
    //cout << "Final toInt " << toInt << " with Index :" << i << endl;
    return stoi(toInt);
}

vector<OpNode*> parsePostFix(vector<OpNode*> orig) {
    stack<OpNode*> stack;
    vector<OpNode*> final;
    for (int i = 0; i < orig.size(); i++)
    {
        if (typeid(*orig[i]->peekVal()).hash_code() == typeid(Integer).hash_code()) {
            final.push_back(orig[i]);
        } else {
            if (stack.empty()) {
                stack.push(orig[i]);
            } else if (orig[i]->getPri() > stack.top()->getPri()) {
                stack.push(orig[i]);
            } else if (orig[i]->getPri() == stack.top()->getPri()) {
                final.push_back(stack.top());
                stack.pop();
                stack.push(orig[i]);
            } else {
                while (!stack.empty())
                {
                    final.push_back(stack.top());
                    stack.pop();
                }
                stack.push(orig[i]);
            }
        }
    }
    while (!stack.empty())
    {
        final.push_back(stack.top());
        stack.pop();
    }
    return final;
}

OpNode* constructTree(vector<OpNode*> list) {
    vector<OpNode*>::iterator itr = list.begin();
    while (itr != (list.end()-1))
    {
        //cout << typeid(*(*itr)->peekVal()).name() << " is the current item\n";
        //cout << "and the next item is " << typeid(*(*(itr+1))->peekVal()).name() << endl;
        // cout << "hash code of the itr+1 " << typeid(*(*(itr+1))->peekVal()).name() << endl;
        // cout << "hash code of Integer " << typeid(Integer).name() << endl;
        if (typeid(*(*(itr+1))->peekVal()).hash_code() != typeid(Integer).hash_code()) {
            //cout << "So its the set parent that is fucking this up?" << endl;
            (*(itr+1))->setLeft((*(itr-1)));
            (*(itr-1))->setParent((*(itr+1)));
            (*(itr+1))->setRight((*itr));
            (*itr)->setParent((*(itr+1)));
            //cout << "So we set the stuff, now we are going to remove the items" << endl;
            itr--;
            list.erase(itr);
            //cout << "first delete passed" << endl;
            list.erase(itr);
            //cout << "second delete passed" << endl;
            //cout << "Checking to see if the stuff is still set\nParent: ";
            //cout << typeid(*(*itr)->peekVal()).name() << endl;
            //cout << "Left: " << typeid(*(*itr)->peekLeft()->peekVal()).name() << "\nRight: " << typeid(*(*itr)->peekRight()->peekVal()).name() << endl;
        } else {
            //cout << "incriment itr?" << endl;
            itr++;
        }
    }
    //cout << "Return: " << typeid(*(list[0])->peekVal()).name() << endl;
    return list[0];
}