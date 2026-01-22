#pragma once
class Bubble {
public:

	Bubble();
	~Bubble();
	void bubbleSort(int arr[],int lenght);

	void show(int arr[], int length) {
		for (int j = 0; j < length; j++) {
			cout << arr[j] << " ";
		}
		cout << endl;
	}

};

Bubble::Bubble() {

}
Bubble::~Bubble() {}

void Bubble::bubbleSort(int arr[], int length){
	bool flag = true;

	for (int i = 0; i < length && flag == true; i++){
		flag = false;

		for (int j = 0; j < length; j++) {
			if (arr[j] > arr[j+1]) {
				flag = true;
				swap(arr[j], arr[j+1]);
			}
			show(arr,length);
		}
		cout << endl;
	}
}
