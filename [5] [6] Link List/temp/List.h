const int maxSize = 100;

class List {
public:
	List();
	~List();

	int numberOfItem();
	void addItem(int item);
	void deleteItem();
	void printItem();

private:
	int size;
	int array[maxSize];
};