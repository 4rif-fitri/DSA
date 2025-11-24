#include <iostream>
using namespace std;
#include "List.h"

List::List() {
	size = 0;
}
List::~List(){}

int List::numberOfItem() {
	return size;
}

void List::addItem(int item) {
	if (size == maxSize) {
		cout << "***There is no more place left*****\n";
		return;
	}
	array[size] = item;
	size++;
}

void List::deleteItem() {
	if (size == 0) {
		cout << "**No more item to be deleted*****\n";
		return;
	}
	size--;
}

void List::printItem() {
	for (int i = 0; i < size; i++){
		cout << array[i] << "  ";
	}
}