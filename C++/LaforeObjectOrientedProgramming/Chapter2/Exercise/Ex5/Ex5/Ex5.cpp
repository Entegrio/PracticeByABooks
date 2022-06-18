// Ex5.cpp

#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
    char symbol;

    cout << "Enter a symbol(letter)";
    cin >> symbol;

    cout << islower(symbol);

    return 0;
}


