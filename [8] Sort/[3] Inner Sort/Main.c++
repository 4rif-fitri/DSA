#include <iostream>
using namespace std;

int main(){

	int arr[] = {9, 10, 7, 1, 3, 4, 3, 2, 1};
	int lenght = sizeof(arr) / sizeof(*arr);



}

#include <iostream>
using namespace std;

int main()
{

	int arr[] = {2, 3, 6, 5, 1};
	int length = sizeof(arr) / sizeof(*arr);

	for (int i = 1; i < length; i++)
	{
		for (int j = i; j > 0; j--)
		{

			cout << endl
				  << endl;
			for (int d = 0; d < length; d++)
			{
				cout << arr[d] << " ";
			}

			if (arr[j] < arr[j - 1])
			{
				swap(arr[j], arr[j - 1]);
			}
			else
			{
				break;
			}
		}
	}

	cout << endl
		  << endl
		  << "Sorted: ";
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}
