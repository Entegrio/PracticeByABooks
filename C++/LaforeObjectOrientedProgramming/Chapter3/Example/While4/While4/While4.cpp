// While4.cpp
// The fourth power of integers. 

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int numb = 1;
	int pow = 1;

	while (pow < 10000)
	{
		cout << setw(2) << numb;		
		cout << setw(6) << pow << endl;
		++numb;
		pow = numb * numb * numb * numb;
	}
	cout << endl;

	return 0;
}
