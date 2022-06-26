// ChCount.cpp
// Calculating the count of words and characters in a string.

#include <iostream>
using namespace std;
#include <conio.h>

#define getche() _getche()
int main()
{
    int chCount = 0;
    int wdCount = 1;
    char ch = 'a';
    
    cout << "Enter a string: ";
    while (ch != '\r')
    {
        ch = getche();
        if (ch == ' ')
            wdCount++;
        else
            chCount++;
    }
    cout << "\nWords: " << wdCount << endl;
    cout << "Characters: " << (chCount - 1) << endl;

    return 0;
}
