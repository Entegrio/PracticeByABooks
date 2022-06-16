// Ex10.cpp

#include <iostream>
using namespace std;

int main()
{
    float pounds, shilings, pence;

    // Exchange rates
    const int penceToShiling = 12;
    const int shilingsToPound = 20;

    cout << "Enter the pounds amount: ";
    cin >> pounds;

    cout << endl << "Enter the shilings amount: ";
    cin >> shilings;

    cout << endl << "Enter the penceamount: ";
    cin >> pence;

    cout << "Decimal pounds amount: \x9C" << (pence / penceToShiling + shilings) / shilingsToPound + pounds;

    return 0;
}

