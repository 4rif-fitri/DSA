#include <iostream>
using namespace std;
//#include "List.h"
//==
//#include "Listt.h"
//==
#include "Listtt.h"

// 
//============

int main(){

	//int item;
	//char answer;
	//List ItemList;

	//cout << "Now there are : " << ItemList.numberOfItem()
	//	 << " item in the list\n\n";

	//cout << "Enter a digit : ";
	//cin >> item;

	//for (int i = 0; i < 10; i++){
	//	ItemList.addItem(item);
	//	cout << "Item " << item++ << " is added\n";
	//}

	//cout << "Now there are : " << ItemList.numberOfItem()
	//	<< " item in the list\n\n";
	//cout << "The list are : \n";
	//ItemList.printItem();

	//cout << "\nNow one item will be deleted. Press Y : ";
	//cin >> answer;

	//ItemList.deleteItem();
	//cout << "The updated List are : \n";
	//ItemList.printItem();

	//==
	//int target;
	//int location;

	//Listt<int> x;
	//for (int i = 1; i < 4; i++){	
	//	x.AddToFront();
	//}
	//cout << "\nNumber of Item Now : " << x.NumberOfItem();
	//cout << "\nThe list are : \n";
	//x.printData();

	//cout << "\nEnter the search item : ";
	//cin >> target;

	//if (x.Traverse(target,location) == true) {
	//	cout << "Item is found at location : " << location << endl;
	//}
	//else {
	//	cout << "Item is not found \n";
	//}

	//==

	Listt<char> x;

	for (int i = 1; i < 4; i++)
	{
		x.AddToFront();
	}

	cout << "\nNumber Of Item Now : " << x.NumberOfItem();
	cout << "\nThe list are : " << endl;
	x.printData();

	x.DeleteFront();
	cout << "\nNumber Of Item Now : " << x.NumberOfItem();
	cout << "\nThe list are : " << endl;
	x.printData();
}

