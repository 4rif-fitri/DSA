#include <iostream>
using namespace std;
#include "Date.h"

int main()
{
	Date a, b;
	b.setDate(25, 12, 2005);
	cout << "a ";
	a.printDate();
	cout << "b ";
	b.printDate();
	cout << endl;

	return 0;
}