#include<iostream>
using namespace std;

template<class T>
class Max {
private:
	T val1, val2;
public:
	Max(T v1, T v2);
	void findMax();
};

template<class T>
Max<T>::Max(T v1, T v2) {
	val1 = v1;
	val2 = v2;
}

template<class T>
void Max<T>::findMax() {
	T max;
	if (val1 > val2) {
		max = val1;
	}
	else {
		max = val2;
	}
	cout << "The maximum value is " << max;
}