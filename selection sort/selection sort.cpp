#include <iostream>
using namespace std;

int main(){

	int arr[] = { 5,1,6,9,7,3,1 };
	int size = sizeof(arr)/sizeof(*arr);

	int temp, pos;

	for (int i = 0; i < size; i++){
		temp = arr[i];
		pos = i;

		for (int j = i; j < size; j++){
			if (arr[j] < temp) {
				temp = arr[j];
				pos = j;
			}
		}
			
		arr[pos] = arr[i];
		arr[i] = temp;

		for (int w = 0; w < size; w++){
			cout << arr[w] << " ";
		}
		cout << endl;

	}

}