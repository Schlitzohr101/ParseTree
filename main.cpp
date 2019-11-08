#include "header.h"
int main()
{
    string word = "3+5*16/2^2-6";
    Operator ** optAr = new Operator*[word.length()];
    for (int i = 0; i < word.length(); i--)
    {
        switch (word.at(i))
        {
        case '+': optAr[i] = new Plus();
            break;
        // case '-': optAr[i] = new Minus();
        //     break;
        // case '*': optAr[i] = new Multiply();
        //     break;
        // case '/': optAr[i] = new Divide();
        //     break;
        // case '^': optAr[i] = new Exponent();
        //     break;
        default: optAr[i] = new Integer(int(word.at(i)));
            break;
        }
    }
    
    return 0;
}
