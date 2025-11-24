template <class DataType>

class Listt {
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
	Listt();
	~Listt();
	void AddToFront();
	bool Traverse(DataType, int&);
	void printData();
	int NumberOfItem();
};

template<class DataType>
Listt<DataType>::Listt() {
	numItem = 0;
	pHead = 0;
}
template<class DataType>
Listt<DataType>::~Listt(){}

template<class DataType>
void Listt<DataType>::AddToFront() {
	DataType item;
	Node* pNew = new Node;
	cout << "Enter data : ";
	cin >> item;
	pNew->data = item;
	pNew->link = pHead;
	pHead = pNew;
	numItem++;
}

template<class DataType>
void Listt<DataType>::printData() {
	pCurr = pHead;
	while (pCurr != 0) {
		cout << pCurr->data << "  ";
		pCurr = pCurr->link;
	}
	cout << "\n";
}

template<class DataType>
int Listt<DataType>::NumberOfItem() {
	return numItem;
}

template<class DataType>
bool Listt<DataType>::Traverse(DataType target,int &loc) {
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