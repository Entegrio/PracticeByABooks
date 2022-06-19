// Factor.cpp 
// Calculation of factorial numbers via the cycle for

#include <iostream>
using namespace std;

int main()
{
    unsigned int numb;
    unsigned long fact = 1;

    cout << "Enter the number: ";
    cin >> numb;

    for (int i = numb; i > 0; i--)
        fact *= i;

    cout << "The factorial of a number is " << fact << endl;

    return 0;
}

