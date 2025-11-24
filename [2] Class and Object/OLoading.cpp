#include<iostream>
#include "Oloading.h"
using namespace std;

OLoading::OLoading() {
	loan = 0;
}
OLoading::OLoading(double l) {
	loan = l;
}
OLoading::~OLoading() {};

double OLoading::Payment(int month,double interest) {
	return (loan / month * interest);
}

double OLoading::Payment(int year, double interest, double deposit) {
	return (deposit - (loan / (12 * year) * interest) );
}