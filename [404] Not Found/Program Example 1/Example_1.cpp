#include <iostream>
using namespace std;

template <class T>
void Change(T x,T y){
	cout << "Before Change: first value: " << x
	<< "\n\t\tsecond value: " << y << endl << endl;

	T a;
	a = x;
	x = y;
	y = a;

	cout << "After Change: first value: " << x
		  << "\n\t\tsecond value: " << y << endl
		  << endl;
}

int main(){
	Change("s","k");
	Change(10,20);
	Change("Lorem","Ipsum");
	Change(0.2,1.5);
}