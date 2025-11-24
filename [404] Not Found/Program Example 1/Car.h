// Car.h
#ifndef CAR_H
#define CAR_H

class Car
{
private:
	int numOfTyre;

public:
	Car(int tyre); // Constructor
	~Car();			// Destructor
	void stop();	// Method
};

#endif