// Ex6.cpp
#include <iostream>
using namespace std;

int main()
{
    float poundPrice = 1.487F;
    float frankPrice = 0.172F;
    float japYenPrice = 0.00955F;
    float dollarAmount;

    cout << "Enter the dollar amount: ";
    cin >> dollarAmount;

    cout << "Pounds sterling: " << dollarAmount * poundPrice << endl
        << "Franks: " << dollarAmount * frankPrice << endl
        << "Pounds sterling: " << dollarAmount * japYenPrice << endl;

    return 0;
}

