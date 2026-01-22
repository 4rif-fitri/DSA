#pragma once

class Selection {
public:
	Selection() {};
	~Selection() {};
	
	void show(int arr[], int length) {
		for (int j = 0; j < length; j++) {
			cout << arr[j] << " ";
		}
		cout << endl;
	}
		
	void SelectionSort(int arr[], int length) {
		
		for (int i = 0; i < length; i++){
			show(arr,length);
			int minIndex = i;
			for (int j = i + 1; j < length; j++){
				if (arr[j] < arr[minIndex]) {
					minIndex = j;
					cout << "i " << i << " min " << minIndex << endl;
				}
			}
			swap(arr[i],arr[minIndex]);
		}
	};

};