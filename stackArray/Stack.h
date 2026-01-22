const int MaxSize = 5;

template<class MyData>
class Stack {
public:
	Stack();
	~Stack();
	void Push(MyData);
	void Pop();
	MyData TopStack();
	bool Underflow();
	bool Overflow();
	void reverse() {
		cout << "the data reverse order: ";
		while (true){
			cout << MyArray[Top] << " ";
			Pop();
			if (Underflow())break;
		}
	}

private:
	int Top;
	MyData MyArray[MaxSize];
};

template<class MyData>
Stack<MyData>::Stack() {
	Top = -1;
}
template<class MyData>
Stack<MyData>::~Stack(){}
template<class MyData>
void Stack<MyData>::Push(MyData item) {
	Top++;
	MyArray[Top] = item;
}
template<class MyData>
void Stack<MyData>::Pop() {
	Top--;
}
template<class MyData>
MyData Stack<MyData>::TopStack() {
	return MyArray[Top];
}
template<class MyData>
bool Stack<MyData>::Underflow() {
	return Top == -1;
}
template<class MyData>
bool Stack<MyData>::Overflow() {
	return Top == MaxSize;
}