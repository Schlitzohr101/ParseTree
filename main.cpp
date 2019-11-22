#include "header.h"
int main()
{
    string word = "3+5*16/2^2-6";
    Operator *optAr[word.length()];
    vector<OpNode*> nodeAr;
    for (int i = word.length()-1; i >= 0 ; i--)
    // for (int i = 0; i < 1; i++)
    {
        switch (word[i])
        {
        case '+':
            nodeAr.push_back(new OpNode(new Plus()));
            break;
        case '-':
            nodeAr.push_back(new OpNode(new Minus()));
            break;
        case '*':
            nodeAr.push_back(new OpNode(new Multiply()));
            break;
        case '/':
            nodeAr.push_back(new OpNode(new Divide()));
            break;
        case '^':
            nodeAr.push_back(new OpNode(new Exponent()));
            break;
        default:
            nodeAr.push_back(new OpNode(new Integer(getMultDigit(word,i))));
            break;
        }
    }
    for (int i = 0; i < nodeAr.size(); i++)
    {
        //cout << (typeid(*nodeAr[i]->peekVal()).hash_code() == typeid(Integer).hash_code()) << endl;
        cout << nodeAr[i]->peekVal()->Evaluate() << endl;
    }

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
    //cout << "current index" << i;
    toInt += word[i];
    //cout << "   toInt : " << toInt<<endl;
    while (i-1 >= 0 && (charToInt(word[i-1]) > 0))
    {
        //cout << "then we add : " << word[i-1];
        toInt += word[i-1];
        i--;
        //cout << " to " << toInt <<endl;
    }
    
    reverse(toInt.begin(),toInt.end());
    //cout << "Final toInt " << toInt << " with Index :" << i << endl;
    return stoi(toInt);
}