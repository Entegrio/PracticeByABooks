// fahren.cpp
// using cin and \n
#include <iostream>
using namespace std;

int main()
{
    int ftemp;

    cout << "Enter the Fahrenheit temperature: ";
    cin >> ftemp;

    int ctemp = (ftemp - 32) * 5 / 9;
    cout << "The Celcius temperature is " << ctemp << '\n';

    return 0;
}


