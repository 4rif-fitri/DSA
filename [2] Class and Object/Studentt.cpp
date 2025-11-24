#include<iostream>
#include "Info.h"
#include "Studentt.h"
using namespace std;

Studentt::Studentt() {

}
Studentt::~Studentt() {

}
void Studentt::getInfo(int a, int b) {
	metric = a;
	marks = b;
}
void Studentt::Print() {
	cout << "\nMetric: " << metric << endl;
	cout << "\nMarks: " << marks;
}
