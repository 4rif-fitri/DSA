#include <iostream>
using namespace std;
#include "bubble.h"
#include "Selection.h"
#include "Insert.h"

void show(int arr[], int length) {
	for (int j = 0; j < length; j++) {
		cout << arr[j] << " ";
	}
}


int main(){

	int arr[] = { 5,6,9,8,3,1,4 };
	int arr2[] = {5,6,9,8,3,1,4};
	int lenght = sizeof(arr)/sizeof(*arr);

	//Bubble bubble;
	//bubble.bubbleSort(arr,lenght);

	//Selection selection;
	//selection.SelectionSort(arr, lenght);

	Insert inert;
	inert.InsertSort(arr, lenght);
}
