#include <iostream>
using namespace std;
#include "Buih.h";

int main(){
	/*int arr[] = { 1,2,3,4,6,5 };
	int length = sizeof(arr) / sizeof(*arr);
	bool flag = true;

	for (int i = 0; i < length && flag == true; i++){
		flag = false;

		for (int j = 0; j < length; j++) {
			cout << arr[j] << " ";
		}

		for ( int j = 0; j < length-1; j++){
			if (arr[j] > arr[j+1]) {
				flag = true;
				swap(arr[j], arr[j + 1]);
			}
		}
		
		cout << endl;
	}*/
	int size = 5;

	Buih<int> sort;
	cout << "Input data : " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "Data [" << i << "] : ";
		cin >> sort.array[i];
	}

	cout << endl;
	sort.bubblesort(sort.array, size - 1);
	for (int j = 0; j < size; j++)
	{
		cout << "Data [" << j << "] : ";
		cout << sort.array[j] << endl;
	}


}
