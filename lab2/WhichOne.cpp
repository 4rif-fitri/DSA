#include <iostream>
#include "WhichOne.h"
using namespace std;
WhichOne::WhichOne() {}
WhichOne::~WhichOne() {}
int WhichOne::f(int a) {
	return a * a;
}
int WhichOne::f(int a, int b = 0) {
	return a * b;
}