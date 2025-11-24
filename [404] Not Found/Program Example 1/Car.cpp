// Car.cpp
#include <iostream>
#include "Car.h"
using namespace std;

Car::Car(int tyre) : numOfTyre(tyre) {}

Car::~Car() = default;

void Car::stop()
{
	cout << "Please stop now! This car has " << numOfTyre << " tyres." << endl;
}