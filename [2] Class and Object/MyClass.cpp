#include<iostream>
#include "MyClass.h"
using namespace std;

MyClass::MyClass() {
	x = 0;
}
MyClass::MyClass(int s) {
	x = s;
}
int MyClass::getx() {
	return x;
}