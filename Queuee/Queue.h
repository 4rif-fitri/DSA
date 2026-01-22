const int SIZE = 5;

template<class MyData>
class Queue {
private:
	MyData array[SIZE];
	int bil;
	int front;
	int rear;

public:
	Queue() {
		front = -1;
		rear = -1;
		bil = 0;
	};

	void Enqueue(MyData value) {
		system("cls");
		if (bil < SIZE) {
			cout << "Insert " << value << " into queue";
			rear++;
			if (rear == SIZE) rear = 0;
			if (bil == 0) front = 0;
			array[rear] = value;
			bil++;
		}
		else cout << "OverFlow!";
	}

	void Dequeue() {
		system("cls");
		if (bil == 0) cout << "UnderFlow!";
		
		else {
			cout << "Dequeue: " << array[front];
			front++;
			
			if (front == SIZE) front = 0;
			if (bil == 1) rear = front = -1;
			bil--;
		}
	}

	void EnqueueBank(MyData &value) {
		system("cls");
		if (bil < SIZE) {
			value++;
			cout << "\t\tQueue Number: " << value;
			rear++;
			if (rear == SIZE) rear = 0;
			if (bil == 0) front = 0;
			array[rear] = value;
			bil++;
		}
		else cout << "List Full";
	}

	void DequeueBank(int& index) {
		system("cls");
		if (bil == 0) cout << "List Kosong";

		else {
			cout << "Calling queue number: " << index;
			front++;
			if (front == SIZE) front = 0;
			if (bil == 1) rear = front = -1;
			bil--;
			index--;
		}
	}

	MyData QueueFront() {
		if (isEmpty()) return false;
		else return array[front];
	}

	MyData QueueRear() {
		if (isEmpty()) return false;
		else return array[rear];
	}

	void printQueue() {
		for (int i = front; i <= rear; i++){
			cout << array[i] << " ";
		}
	}

	bool isEmpty() {
		return (bil == 0);
	}

};