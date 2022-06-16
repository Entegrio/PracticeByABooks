// circarea.cpp
// work with real variables.
#include <iostream>
using namespace std;

int main()
{
    float rad;
    const float PI = 3.14159F;

    cout << "Enter the radius of the circle: ";
    cin >> rad;

    float area = PI * rad * rad;

    cout << "The area of the circle is " << area << endl;

    return 0;
}

