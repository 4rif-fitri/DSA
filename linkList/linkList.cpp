#include <iostream>
using namespace std;

//struct Node{
//	int value;
//	Node* next;
//};

//void addDepan(Node* &head,int value) {
//	Node *node = new Node();
//	node->value = value;
//	node->next = head;
//	head = node;
//}
//
//void addBelakang(Node*& head, int value) {
//	Node* node = new Node();
//	node->value = value;
//	node->next = nullptr;
//
//	if (head == nullptr){
//		head = node;
//	}
//	else {
//		Node *temp = head;
//		while (temp->next != nullptr){
//			temp = temp->next;
//		}
//			temp->next = node;
//	}
//
//}
//
//void addTengah(Node*& head, int value) {
//
//}
//
//void show(Node *head) {
//	Node* temp = head;
//	while (temp != nullptr){
//		cout << temp->value << " ";
//		temp = temp->next;
//	}
//}

#include "List.h"

//template<class DataType>
//class List {
//public:
//
//	struct Node{
//		DataType value;
//		Node* link;
//	};
//	Node* pHead;
//
//	List();
//	~List();
//	void AddBack(DataType v);
//	void AddDepan(DataType v);
//	void Show();
//	void AddTengah(int terget, DataType v) {
//		Node* newNode = new Node();
//		newNode->value = v;
//		newNode->link = pHead;
//	}
//	void cari(int target, int value) {
//		
//		Node*newNode = new Node();
//		newNode->value = value;
//
//		Node* temp = pHead;
//		while (temp != nullptr){
//			cout << temp->value << " ";
//			if (temp->value == target){
//				cout << "Ada";
//				newNode->link = temp->link;
//				temp->link = newNode;
//				return;
//			}
//			temp = temp->link;
//		}
//		cout << "Not FOUND";
//	}
//};
//template<class DataType>
//void List<DataType>::AddDepan(DataType v) {
//	Node *newNode = new Node();
//	newNode->value = v;
//	newNode->link = pHead;
//
//	pHead = newNode;
//}
//template<class DataType>
//List<DataType>::List() {
//	pHead = nullptr;
//}
//template<class DataType>
//List<DataType>::~List(){}
//template<class DataType>
//void List<DataType>::AddBack(DataType v) {
//	
//	Node* newNode = new Node();
//	newNode->value = v;
//	newNode->link = nullptr;
//
//	if (pHead == nullptr) {
//		pHead = newNode;
//	}
//	else {
//		Node* temp = pHead;
//		while (temp->link != nullptr){
//			temp = temp->link;
//		}
//		temp->link = newNode;
//	}
//
//}
//template<class DataType>
//void List<DataType>::Show() {
//	Node* temp = pHead;
//	while (temp != nullptr){
//		cout << temp->value << " ";
//		temp = temp->link;
//	}
//}
int main() {

	//List<int> list;
	//list.AddBack(1);
	//list.AddBack(3);
	//list.AddBack(5);
	//list.AddBack(8);

	//list.Show();
	//cout << endl;
	//list.cari(1,2);
	//list.Show();
	//list.cari(100, 2);
	//list.Show();

	//==

	//Node* head = nullptr;
	//
	////addDepan(head,1);
	//addBelakang(head, 2);
	//addBelakang(head,2);
	//show(head);

	//==

	//int target;
	//int location;
	List<char> x;

	for (int i = 0; i < 5; i++) {
		x.AddToFront();
	}

	cout << "\nNumber of Item Now : " << x.NumberOfItem();
	cout << "\nThe list are : " << endl;
	x.printData();
	//x.AddMiddle();
	//cout << "\nEnter the search item : ";
	//cin >> target;

	//if (x.Traverse(target,location) == true) {
	//	cout << "Item is found at location : " <<
	//		location << endl;
	//}else {
	//	cout << "Item is not found \n";
	//}

	//x.DeleteFront();
	//cout << "\nNumber of Item Now : " << x.NumberOfItem();

	x.DeleteMiddle();
	x.printData();

	//==


}
