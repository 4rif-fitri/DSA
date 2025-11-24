#include<iostream>
#include "First.h"
using namespace std;

First::First() {
	x = 5;
}
First::~First(){}
void First::setX(int a) {
	x = a;
}
void First::printData() {
	cout << "X is : " << x << endl;
}