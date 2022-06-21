// DivDo.cpp 
// Demonstrates DO loop

#include <iostream>
using namespace std;

int main()
{
    long divedend, divisor;
    char ch;

    do
    {
        cout << "Enter dividend: ";
        cin >> divedend;
        cout << "Enter divisor: ";
        cin >> divisor;

        cout << "Quotient is " << divedend / divisor;
        cout << ", remainder is " << divedend % divisor;

        cout << "\nDo another? (y/n): ";
        cin >> ch;
    } while (ch != 'n');
    
    return 0;
}


