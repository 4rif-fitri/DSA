#ifndef CAR_H
#define CAR_H

class Car {
	private:  int numOfTyre;

public: 
	Car(int tyre);
	~Car();

	void stop();
};
#endif

#include<iostream>
using namespace std;

Car::Car(int tyre) {
	numOfTyre = tyre;
}
Car::~Car(){}

void Car::stop() {
	cout << "Please stop now!" << numOfTyre << " tyre\n";
}