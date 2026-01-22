template<class MyData>
struct Nod{
	MyData data;
	Nod <MyData>* next;
};

template<class MyData>
class QueueLink {
private:
	int quantity;
	Nod<MyData>* front;
	Nod<MyData>* rear;
public:
	QueueLink() {
		front = NULL;
		rear = NULL;
		quantity = 0;
	}
	void Enqueue(MyData value) {
		system("cls");
		Nod<MyData>* T = new Nod<MyData>;
		cout << "Enqueue " << value << " into the queue";
		T->data = value;
		T->next = NULL;

		if (!isEmpty()) rear->next = T;
		else front = T;

		quantity++;
		rear = T;
	}
	void Dequeue() {
		system("cls");
		if (quantity == 0) cout << "UnderFlow!";
		else {
			cout << "Dequeue: " << front->data;
			Nod<MyData>* temp = front;

			if (quantity == 1) rear = front = NULL;
			else front = front->next;

			quantity++;
			delete temp;
		}
	}

	void EnqueueBank(MyData &value) {
		value++;
		system("cls");
		Nod<MyData>* T = new Nod<MyData>;
		cout << "\t\tQueue Number: " << value;
		T->data = value;
		T->next = NULL;
		if (!isEmpty()) rear->next = T;
		else front = T;

		quantity++;
		rear = T;
	}
	void DequeueBank(MyData& value) {
		system("cls");
		if (quantity == 0) cout << "UnderFlow!";
		else {
			cout << "Calling queue number: " << value;
			value--;
			Nod<MyData>* temp = front;

			if (quantity == 1) rear = front = NULL;
			else front = front->next;

			quantity--;
			delete temp;
		}
	}

	MyData queueFront() {
		if (isEmpty()) return false;
		else return front->data;
	}
	MyData queueRear() {
		if (isEmpty()) return false;
		else rear->data;
	}
	bool isEmpty() {
		return (quantity == 0);
	}

	void printQueue() {
		Nod<MyData>* temp = front;
		while (true) {
			if (temp != NULL) {
				cout << temp->data << " ";
				temp = temp->next;
			}
			else break;
		}

	}

	void filter() {
		//Nod<MyData>* now = front;
		//Nod<MyData>* prev = front;
		//Nod<MyData>* next = front;
		//while (true) {
		//	if (now == NULL) break;

		//	if (now->data < 0) {
		//		next = prev->next;
		//		prev->next;
		//	}
		//	prev = now;
		//	now = now->next;
		//}

		Nod<MyData>* now = front;
		Nod<MyData>* prev = NULL;

		while (now != NULL) {
			if (now->data < 0) {
				Nod<MyData>* temp = now;

				// buang node pertama
				if (prev == NULL) {
					front = now->next;
					now = front;
				}
				// buang node tengah / akhir
				else {
					prev->next = now->next;
					now = now->next;
				}

				// jika buang node terakhir
				if (temp == rear) {
					rear = prev;
				}

				delete temp;
				quantity--;
			}
			else {
				prev = now;
				now = now->next;
			}
		}
	}

	//secular

	void sEnqueue(MyData value) {
		Nod<MyData>* T = new Nod<MyData>;
		T->data = value;

		if (isEmpty()) {
			front = rear = T;
			rear->next = front;   // circular link
		}
		else {
			rear->next = T;
			rear = T;
			rear->next = front;   // circular link
		}
		quantity++;
	}

	void sDequeue() {
		if (isEmpty()) {
			cout << "Underflow!";
			return;
		}

		Nod<MyData>* temp = front;

		if (quantity == 1) {
			front = rear = NULL;
		}
		else {
			front = front->next;
			rear->next = front;   // kekalkan circular
		}

		delete temp;
		quantity--;
	}

	MyData sQueueFront() {
		return front->data;
	}

	MyData sQueueRear() {
		return rear->data;
	}
};