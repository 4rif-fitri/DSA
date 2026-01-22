#include <iostream>
//#include "Change.h"
//#include "Multiplication.h"
////#include "Operation.h"
//#include "Topup.h"
#include "Max.h"
using namespace std;

//template<class T>
//void Change(T x,T y) {
//	cout << "Before Change: first value: " << x
//		<< "\tsecond value: " << y << endl << endl;
//
//	T temp;
//	temp = x;
//	x = y;
//	y = temp;
//	cout << "After Change: first value: " << x
//		<< "\tsecond value: " << y << endl << endl;
//}

//template<class T>
//void display(T a, T b, char opt) {
//	T result;
//
//	if (opt == '+') {
//		result = a + b;
//	}
//	else if (opt == '-') {
//		result = a - b;
//	}
//	else if (opt == '*') {
//		result = a * b;
//	}
//	else if (opt == '/') {
//		if (b != 0)
//		{
//			result = a / b;
//		}
//		else {
//			cout << "Error: Division by zero";
//		}
//	}
//
//	cout << result;
//};

//template<class T>
//void printArray(T *array, int count) {
//	for (int i = 0; i < count; i++){
//		cout << array[i] << " ";
//	}
//}

int main(){
	//Change("a", "b");
	//Change(10, 20);

	//==
	//Change <char> a;
	//Change <int> b;
	////Change a;
	////Change b;


	//a.setValue('a', 'b');
	//a.toChange();
	//b.setValue(90, 2);
	//b.toChange();

	//==

	//int int1, int2;
	//float float1, float2;

	//cout << "Input two integers : ";
	//cin >> int1 >> int2;

	//cout << "Input two floats : ";
	//cin >> float1 >> float2;

	//Multiplication <int> INT;
	//Multiplication <float> FLOAT;

	//cout << "Multiplication of two integers: " << 
	//	INT.darab(int1, int2);
	//cout << endl;

	//cout << "Multiplication of two floats :" <<
	//	FLOAT.darab(float1, float2);
	//==

	//cout << " 10 + 6 = ";
	//display(10, 6, '+');
	//cout << "\n 10 * 6 = ";
	//display(10, 6, '*');
	//cout << "\n 10 - 6 = ";
	//display(10, 6, '-');
	//cout << "\n 10 / 6 = ";
	//display(10, 6, '/');
	//cout << endl;
	
	//==

	//Topup<int, double> no1(1000, 4.55653), no2(1000, 4.55653);

	//cout << "Output created by the first object\n";
	//no1.Display();
	//no1.Execute();

	//cout << "\nOutput created by the second object\n";
	//no2.Display();
	//no2.Execute();

	//==

	//char arrayA[] = "LoremIpsum";
	//float arrayB[] = { 10.5,20.5,30.5,40.5,50.5 };

	//cout << "The value in arrayA : ";
	//printArray(arrayA, 5);
	//cout << endl;
	//cout << "The value in arrayB : ";
	//printArray(arrayB, 5);

	//==

	Max <int> object1(100, 50);
	Max <char> object2('a', 'A');
	object1.findMax();
	cout << endl;
	object2.findMax();
}

