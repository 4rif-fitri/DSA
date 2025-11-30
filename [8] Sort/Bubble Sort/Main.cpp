#include <iostream>
using namespace std;

int main()
{
	int arr[] = {9, 10, 7, 1, 3, 4, 3, 2, 1};
	int lenght = sizeof(arr) / sizeof(*arr);

	// bool ada_sort = true;

	// for (int i = 0; i < lenght - 1 && ada_sort == true; i++){
		for (int i = 0; i < lenght - 1; i++){

			for (int j = 0; j < lenght - i - 1; j++){
				// ada_sort = false;

				if (arr[j] > arr[j + 1])
				{
					// ada_sort = true;
					swap(arr[j], arr[j + 1]);
				}

				cout << endl;
				for (int w = 0; w < lenght; w++)
				{
					cout << arr[w] << " ";
				}
			}
			cout << endl;
		}
		cout
			 << endl;
		for (int w = 0; w < lenght; w++)
		{
			cout << arr[w] << " ";
		}
	}