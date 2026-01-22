//Car.cpp
//The definition of class interface in Car.h
# include <iostream>
# include "Car.h"
using namespace std;
//Contructor
Car::Car(int tyre)
{
	numOfTyre = tyre;
}
//Destructor
Car::~Car() {}
//Method stop
void Car::stop()
{
	cout << "Please stop now! " << numOfTyre << " tyre";
};