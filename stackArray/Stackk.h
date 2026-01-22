
template<class MyData>
struct Nod{
	MyData data;
	Nod <MyData>* next;
};

template<class MyData>
class Stackk {
private:
	int count;
	Nod<MyData>* top;

public:
	Stackk() {
		top = NULL;
		count = 0;
	};
	void Push(MyData& value) {
		cout << "Push " << value << endl;
		Nod <MyData>* T = new Nod <MyData>;
		T->data = value;
		T->next = top;
		top = T;
		count++;
	};
	void Pop() {
		if (!isEmpty()) {
			cout << "Pop " << top->data << endl;
			Nod <MyData>* temp = top;
			top = top->next;
			delete temp;
			--count;
		}	
		else {
			cout << "Stack is Empaty";
		}
	};
	bool isEmpty() {
		return count == 0;
	};
	MyData TopStack() {
		if (isEmpty()) return -1;
		else return top->data;
	};
};