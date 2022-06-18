// Ex7.cpp

#include <iostream>
using namespace std;

int main()
{
    float celsTemp;

    cout << "Enter the temperature in Celsius: ";
    cin >> celsTemp;

    cout << "The temperature in Fahrenheit: " << celsTemp * 9 / 5 + 32 << endl;

    return 0;
}
