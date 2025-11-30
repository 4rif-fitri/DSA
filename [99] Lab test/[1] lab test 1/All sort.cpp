#include <iostream>
using namespace std;

void show(int arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void bubble(int arr[], int length)
{
	int count = 0;
	bool flag = true;
	for (int i = 0; i < length && flag == true; i++)
	{
		flag = false;

		for (int j = 0; j < length - i - 1; j++)
		{
			count++;
			if (arr[j + 1] < arr[j])
			{
				flag = true;
				swap(arr[j + 1], arr[j]);
			}
			show(arr, length);
		}
		cout << endl;
	}
	cout << "count : " << count << endl
		  << endl;
}

void buble(int arr[], int length)
{
	int count = 0;
	for (int i = 0; i < length; i++)
	{

		for (int j = 0; j < length - i - 1; j++)
		{
			count++;
			if (arr[j + 1] < arr[j])
			{
				swap(arr[j + 1], arr[j]);
			}
			show(arr, length);
		}
		cout << endl;
	}

	cout << "count : " << count;
}

void selection(int arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		show(arr, length);
		int minIndex = i;
		for (int j = i + 1; j < length; j++)
		{
			if (arr[j] < arr[minIndex])
			{
				minIndex = j;
			}
		}
		swap(arr[i], arr[minIndex]);
		cout << endl;
	}
}

void insert(int arr[], int length)
{
	for (int i = 1; i < length; i++)
	{
		for (int j = i; j > 0; j--)
		{
			show(arr, length);
			if (arr[j] < arr[j - 1])
			{
				swap(arr[j], arr[j - 1]);
			}
			else
			{
				break;
			}
		}
		cout << endl;
	}
}

int main()
{

	int arr1[] = {8, 1, 4, 2, 4, 6, 8, 3, 1};
	int arr2[] = {8, 1, 4, 2, 4, 6, 8, 3, 1};
	int arr3[] = {8, 1, 4, 2, 4, 6, 8, 3, 1};
	int arr4[] = {8, 1, 4, 2, 4, 6, 8, 3, 1};
	int lenght = sizeof(arr1) / sizeof(*arr1);
	// bubble(arr1,lenght);
	// buble(arr2,lenght);
	// selection(arr3,lenght);
	insert(arr3, lenght);
}
