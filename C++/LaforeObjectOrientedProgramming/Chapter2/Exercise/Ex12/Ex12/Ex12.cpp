// Ex12.cpp

#include <iostream>
using namespace std;

int main()
{
    float decpounds;
    int pounds, shilings, pence;
    float decfrac;


    // Exchange rates
    const int penceToShiling = 12;
    const int shilingsToPound = 20;

    cout << "Enter the decimal pounds amount: ";
    cin >> decpounds;

    pounds = static_cast<int>(decpounds);

    decfrac = decpounds - pounds;

    cout << "Equivalent amount in the old form of the record:: \x9C" << pounds << '.';

    shilings = static_cast<int>(decfrac * shilingsToPound);

    decfrac = (decfrac * shilingsToPound) - shilings;

    // You can get rid of this variable. But it is needed to make the code clearer.
    pence = static_cast<int>(decfrac * penceToShiling);

    cout << shilings << '.' << pence;
    
    return 0;
}
