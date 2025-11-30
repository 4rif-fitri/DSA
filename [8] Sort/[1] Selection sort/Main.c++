#include <iostream>
using namespace std;

int main(){
	int arr[] = {9, 10, 7, 1, 3, 4, 3, 2, 1};
	int lenght = sizeof(arr) / sizeof(*arr);

	for (int i = 0; i < lenght - 1; i++){

		for (int j = i + 1; j < lenght; j++){

			if(arr[j] < arr[i]){
				swap(arr[i],arr[j]);
			}
			
		}


		cout << endl;
		for (int d = 0; d < lenght; d++){
			cout << arr[d] << " ";
		}
		
	}
	

}