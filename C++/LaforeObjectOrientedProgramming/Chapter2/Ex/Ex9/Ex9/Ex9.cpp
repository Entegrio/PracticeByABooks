// Ex9.cpp


#include <iostream>
using namespace std;

// The following fomula is used to add two fractions:
// a/b + c/d = (a*d + b*c)/(b*d); 

int main()
{
    float a, b, c, d;
    char dummychar;

    cout << "Enter the first fraction (a/b): " << endl;
    cin >> a >> dummychar >> b;
    
    cout << "Enter the second fraction (a/b): " << endl;
    cin >> c >> dummychar >> d;

    cout << "The sum of the two factions is " << (a * d + b * c) / (b * d) << endl;

    return 0;
}

