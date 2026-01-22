#include <iostream>
using namespace std;
#include "Stack.h"
//====
#include "Stackk.h"



int main(){
	
	//Stack<char> StackItem;
	//char item;
	//bool isFull = false;

	//do{
	//	if (!StackItem.Overflow()) {
	//		cout << "Enter Data : ";
	//		cin >> item;

	//		cout << "Push item " << item << " now\n";
	//		StackItem.Push(item);
	//	}else {
	//		cout << "\nStack is Full" << endl;
	//		isFull = true;
	//	}
	//} while (!isFull);

	//cout << "\nNow we Will top And pop the stack \n";
	//while (!StackItem.Underflow()){
	//	
	//	cout << "\nTop is " << StackItem.TopStack() << " ";
	//	cout << "Pop the stack now ";
	//	StackItem.Pop();
	//}
	//if (StackItem.Underflow()) {
	//	cout << "\nStack is empty";
	//}
	
	//====

	//Stackk <char> myStack;
	//char i;
	//cout << "\n0 to stop, 1 to Pop\nInsert a Char to top : ";
	//cin >> i;

	//while (i != '0') {
	//	system("cls");
	//	if (i == '1') {
	//		myStack.Pop();
	//	}
	//	else {
	//		myStack.Push(i);
	//	}
	//	if (myStack.TopStack() != -1) {
	//		cout << "Top Now is: " << myStack.TopStack();
	//	}
	//	cout << endl;
	//	cout << "\n0 to stop, 1 to Pop\nInsert a Char to top : ";
	//	cin >> i;
	//}

	//====
	 
	//Stack<char> StackItem;
	//char item;
	//bool isFull = false;

	//do{
	//	if (!StackItem.Overflow()) {
	//		cout << "0 to stop, Insert a Char to top : ";
	//		cin  >> item;
	//		if (item == '0') {
	//			StackItem.reverse();
	//			break;
	//		}
	//		else {
	//			//cout << "Push item " << item << " now\n";
	//			StackItem.Push(item);
	//		}

	//	}else {
	//		cout << "\nStack is Full" << endl;
	//		isFull = true;
	//	}
	//} while (!isFull);

	//===

	//Stack<int> mystack;
	//int number;
	//cout << "Enter an integer number : ";
	//cin >> number;

	//while (number > 0) {
	//	if (!mystack.Overflow()) {
	//		mystack.Push(number % 2);
	//		number = number / 2;
	//	}
	//	else{
	//		cout << "\nStack OverFlow";
	//		break;
	//	}
	//}
	//cout << "The equivalent binary number is : ";
	//while (!mystack.Underflow()){
	//	cout << mystack.TopStack();
	//	mystack.Pop();
	//}
	
	//==

	//Stack<char> stackItem;
	//int index = 0;
	//char exp[50];
	//cout << "\nEnter an arithmetic expression : ";
	//cin.getline(exp,50);

	//while (index < strlen(exp)) {
	//	switch (exp[index]) {

	//		case '(':
	//			stackItem.Push(exp[index]);
	//			break;
	//		case ')':
	//			if (!stackItem.Underflow()) stackItem.Pop();
	//			else {
	//				cout << "error : missing ) \n";
	//				return 0;
	//			}
	//			break;
	//	}
	//	index++;
	//}

	//if (!stackItem.Underflow()){
	//	cout << "Error : missing ) ";
	//}

	//==

	//Stack<char> stackItem;
	//int index = 0;
	//char exp[50], top;

	//cout << "Enter an arimatic espression : ";;
	//cin.getline(exp, 50);

	//while (index < strlen(exp)){
	//	if (exp[index] == '(') stackItem.Push(exp[index]);
	//	else if(exp[index] == ')') {
	//		
	//		top = stackItem.TopStack();
	//		while (top != '('){
	//			cout << top;
	//			stackItem.Pop();
	//			top = stackItem.TopStack();
	//		}
	//	}
	//	else if (exp[index] == '+' || exp[index] == '-') {
	//		while (!stackItem.Underflow() && (stackItem.TopStack() != '(')) {
	//			cout << stackItem.TopStack();
	//			stackItem.Pop();
	//		}
	//		stackItem.Push(exp[index]);
	//	}
	//	else if (exp[index] == '*' || exp[index] == '/' || exp[index] == '%') {
	//		top = stackItem.TopStack();
	//		
	//		if (!stackItem.Underflow() || ((top == '+') || (top == '-'))) {
	//			stackItem.Push(exp[index]);
	//		}
	//		else {
	//			cout << stackItem.TopStack();
	//			stackItem.Pop();
	//			stackItem.Push(exp[index]);
	//		}
	//	
	//	}
	//	else {
	//		cout << exp[index];
	//	}
	//	index++;
	//	
	//}
	//while (!stackItem.Underflow()){
	//	if (stackItem.TopStack() != '(') {
	//		cout << stackItem.TopStack();
	//	}
	//	stackItem.Pop();
	//}
	//cout << endl;

	//===
	
	//Stack<char> stackItem;
	//int index = 0;
	//char exp[50];
	//cout << "\nEnter an arithmetic expression : ";
	//cin.getline(exp,50);

	//while (index < strlen(exp)) {
	//	switch (exp[index]) {

	//		case '(':
	//			stackItem.Push(exp[index]);
	//			break;
	//		case ')':
	//			if (stackItem.Underflow()) {
	//				cout << "error : missing ( \n";
	//				return 0;
	//			} 
	//			else {
	//				stackItem.Pop();
	//			}
	//			break;
	//	}
	//	index++;
	//}

	//if (!stackItem.Underflow()){
	//	cout << "Error : missing ) ";
	//}

	//==

	Stack<int> mystack;
	int index = 0;
	char exp[50];
	cout << "Enter an integer binary : ";
	cin.getline(exp,50);

	while (index < strlen(exp)) {
		if (!mystack.Overflow()) {
			mystack.Push(exp[index] - 48);
		}
		else{
			cout << "\nStack OverFlow";
			break;
		}
		index++;
	}
	int decimalValue = 0;
	int weight = 1; // Bermula dengan 2^0 = 1
	cout << "The equivalent hex number is : ";
	while (!mystack.Underflow()){
		int bit = mystack.TopStack();
		decimalValue += (bit * weight);
		weight *= 2; // Gandaan 2 (1, 2, 4, 8, ...)
		mystack.Pop();
	}
	cout << "The equivalent decimal number is: " << decimalValue << endl;
}
