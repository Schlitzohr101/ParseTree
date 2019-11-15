#include "header.h"
int main()
{
    string word = "3+5*16/2^2-6";
    Operator *optAr[word.length()];
    OpNode * nodeAr[word.length()];
    for (int i = 0; i < word.length(); i++)
    // for (int i = 0; i < 1; i++)
    {
        switch (word[i])
        {
        case '+':
            optAr[i] = new Plus();
            break;
        case '-':
            optAr[i] = new Minus();
            break;
        case '*':
            optAr[i] = new Multiply();
            break;
        case '/':
            optAr[i] = new Divide();
            break;
        case '^':
            optAr[i] = new Exponent();
            break;
        default:
            optAr[i] = new Integer(charToInt(word[i]));
            break;
        }
    }
    for (int i = 0; i < word.length(); i++)
    {
        cout << optAr[i]->Evaluate() << endl;
    }

    return 0;
}

int charToInt(char c)
{
    int toReturn = -1;
    switch (c)
    {
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
    default: toReturn = 0;
        break;
    }
    return toReturn;
}
