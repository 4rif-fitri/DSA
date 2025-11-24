#ifndef OLOADING_H
#define OLOADING_H
class OLoading
{
private:
	double loan;

public:
	OLoading();			// default constructor
	OLoading(double); // overloading constructor
	~OLoading();		// destructor
					 // overloading Payment 1
	double Payment(int, double);
	// overloading Payment 2
	double Payment(int, double, double);
};
#endif
