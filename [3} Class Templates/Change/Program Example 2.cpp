#include <iostream>
using namespace std;
#include "Change.h"
void main()
{
	Change <char> a;
	Change <int> b;
	a.setValue('s', 'k');
	a.toChange();
	b.setValue(90, 2);
	b.toChange();
}