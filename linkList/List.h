template<class DataType>

class List {
private:
	class Node {
	public:
		DataType data;
		Node* link;
	};
	Node* pHead;
	Node* pCurr;
	int numItem;

public:
	List();
	~List();
	void AddToFront();
	void printData();
	bool Traverse(DataType, int&);
	int NumberOfItem();
	void DeleteFront();
	void AddMiddle();
	void DeleteMiddle();
};
template<class DataType>
void List<DataType>::DeleteMiddle() {
	DataType target;
	cout << "Padam data : ";
	cin >> target;

	Node* temp = pHead;
	Node* back = nullptr;

	if (temp == nullptr) {
		cout << "Not found";
		return;
	}

	if (temp->data == target ) {
		pHead = temp->link;
		return;
	}

	while (temp != nullptr && temp->data != target){
		back = temp;
		temp = temp->link;
	}

	if (temp == nullptr) {
		cout << "Not found";
		return;
	}
	
	back->link = temp->link;


	//DataType target;
	//cout << "padam data apa : ";
	//cin >> target;
	//Node* temp = pHead;
	//Node* cap = nullptr;
	//while (temp != nullptr){
	//	cap = temp; //A

	//	temp = temp->link;//S
	//	//A
	//	//       S           A
	//	if (temp->data == target) {

	//		if (pHead->data == temp->data) {
	//			pHead = temp;
	//		}
	//		else {
	//		cap->link = temp->link;

	//		return;
	//		}

	//	}
		//cout << endl;
		//cout << "Cap " << cap->data;
		//cout << endl;
		//cout << "Before " << temp->data;
		//cout << endl;

	
	//}
}
template<class DataType>
void List<DataType>::AddMiddle() {
	DataType value;
	DataType target;
	cout << "Add After : ";
	cin >> target;
	
	Node* temp = pHead;
	while (temp != nullptr){
		//cout << temp->data << " ";
		if (temp->data == target) {
				cout << "Enter Data : ";
				cin >> value;

				Node* newNode = new Node();
				newNode->data = value;
				newNode->link = temp->link;
				temp->link = newNode;

				cout << "\nThe list are : " << endl;
				printData();
			return;
		}
		temp = temp->link;
	}
	cout << "NOT FOUND";
	
}

template<class DataType>
List<DataType>::~List(){}
template<class DataType>
void List<DataType>::DeleteFront() {
	pHead = pHead->link;
	numItem--;
	cout << "First Item Dipadam";
}
template<class DataType>
void List<DataType>::AddToFront() {
	DataType item;
	Node* pNew = new Node();
	cout << "Enter data : ";
	cin >> item;
	pNew->data = item;
	pNew->link = pHead;
	pHead = pNew;
	numItem++;
}

template<class DataType>
void List<DataType>::printData() {
	pCurr = pHead;
	while (pCurr != 0){
		cout << pCurr->data << " ";
		pCurr = pCurr->link;
	}
	cout << endl;
}

template<class Datatype>
int List<Datatype>::NumberOfItem() {
	return numItem;
}

template<class DataType>
bool List<DataType>::Traverse(DataType target, int &loc) {
	if (numItem == 0) {
		cout << "There is no item in the list\n";
	}
	else {
		pCurr = pHead;
		loc = 0;
		while (pCurr->data != target && pCurr->link != 0){
			pCurr = pCurr->link;
			loc++;
		}

		if (pCurr->data == target) {
			return true;
		}
		else {
			return false;
		}
	}
}