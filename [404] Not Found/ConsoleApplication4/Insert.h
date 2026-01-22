#pragma once

class Insert {
public:
	Insert() {};
	~Insert() {};

	void show(int arr[], int length) {
		for (int j = 0; j < length; j++) {
			cout << arr[j] << " ";
		}
		cout << endl;
	}

	void InsertSort(int arr[], int length) {
		for (int i = 1; i < length; i++){
			for (int j = i; j > 0; j--){
			show(arr, length);
				if (arr[j] < arr[j-1]) {
					swap(arr[j], arr[j - 1]);
				}
				else {
					break;
				}
			}
			cout << endl;
		}
	}
};