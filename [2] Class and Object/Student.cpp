#include<iostream>
#include "Student.h"
using namespace std;

Student::Student() {
	metric = 0;
	yearOfStudy = 0;
}
Student::~Student() {

}
void Student::printData() {
	cout << "Metric Number : " << metric << endl;
	cout << "Year Of Study : " << yearOfStudy << endl;
}