#include<iostream>
using namespace std;

template<class T>
class Change {
private:
	T first, second;
public:
	Change();
	~Change();
	void setValue(T, T);
	void toChange();
};
template<class T>
Change<T>::Change(){}

template<class T>
Change<T>::~Change() {}

template<class T>
void Change<T>::setValue(T x, T y) {
	first = x;
	second = y;
}

template<class T>
void Change<T>::toChange() {
	cout << "After Change: first value: " << first
		<< "\tsecond value: " << second << endl << endl;
	T a;
	a = first;
	first = second;
	second = a;
	cout << "After Change: first value: " << first
		<< "\tsecond value : " << second << endl << endl;
}