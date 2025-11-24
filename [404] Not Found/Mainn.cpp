#include<iostream>
#include <Windows.h>
using namespace std;

int main(){
	for (int i = 0; i < 20; i++)
	{
		cout << "\r[";
		for (int j = 0; j <= 20; j++)
		{
			if (j < i)
			{
				cout << "#";
			}
			else
			{
				cout << "";
			}
		}
		Sleep(100);
		cout << "]" << ((double)i / (double)20) * 100 << "%";
	}
	cout << endl;
}