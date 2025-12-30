#include <iostream>
using namespace std;

void deleteFornt(int array[], int &fornt, int& rear, int size) {
	if (fornt == rear) {
		cout << "KOSONG";
	}
	else {
		array[fornt] = NULL;
		fornt++;
	}
}

void insertFornt(int num,int array[], int fornt, int &rear,int size) {
	if (size == rear) {
		cout << "Full!";
	}else {
		array[rear] = num;
		rear++;
	}
}

void display(int array[], int front , int rear) {
	for (int i = front; i < rear; i++){
		cout << array[front] << " ";
		front++;
	}
}

//=== yt

void insert(int size, int front, int &rear, int arr[]) {
	system("cls");
	if (rear == size) cout << "\nStatus: Penuh (Queue Full!)\n";
	else {
		int element;
		cout << "Masukkan nilai: ";
		cin >> element;
		arr[rear] = element;
		rear++;
		cout << "Berjaya ditambah.\n";
	}
}
void deletee(int front,int &rear, int arr[]) {
	system("cls");
	if (front == rear) cout << "\nStatus: Kosong (Queue Empty!)\n";
	else {
		cout << "\nElemen " << arr[front] << " telah dibuang.\n";
		//shifr ke depan
		for (int i = front; i < rear; i++){
			arr[i] = arr[i+1];
		}
		rear--;
	}
}
void travel(int front, int rear, int arr[]) {
	system("cls");
	if (front == rear) cout << "\nQueue Kosong!";
	else {
		cout << "\nIsi Queue: ";
		for (int i = front; i < rear; i++){
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
}

void insertt(int size, int &front, int& rear, int arr[]) {
	//if ((size - 1 == rear) || (front == rear + 1))
	//	cout << "\nStatus: Penuh (Queue Full!)\n";
	//else if(front == -1 && rear == -1) {
	//	front = rear = 0;
	//	int element;
	//	cout << "Masukkan nilai: ";
	//	cin >> element;
	//	arr[rear] = element;
	//	rear++;
	//	cout << "Berjaya ditambah.\n";

	//}
	//else if (rear == size-1) {
	//	rear = 0;
	//	int element;
	//	cout << "Masukkan nilai: ";
	//	cin >> element;
	//	arr[rear] = element;
	//	rear++;
	//	cout << "Berjaya ditambah.\n";
	//}
	//else {
	//	int element;
	//	cout << "Masukkan nilai: ";
	//	cin >> element;
	//	arr[rear] = element;
	//	rear++;
	//	cout << "Berjaya ditambah.\n";
	//}

	if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1))) {
		cout << "\nStatus: Penuh (Queue Full!)\n";
		return;
	}

	int element;
	cout << "Masukkan nilai: ";
	cin >> element;

	if (front == -1) { // Jika masukkan elemen pertama
		front = rear = 0;
		arr[rear] = element;
	}
	else if (rear == size - 1 && front != 0) { // Rear sampai hujung, pusing ke depan
		rear = 0;
		arr[rear] = element;
	}
	else { // Normal increment
		rear++;
		arr[rear] = element;
	}
	cout << "Berjaya ditambah.\n";
}
void deleteee(int size, int &front, int& rear, int arr[]) {
	if(front == -1 && rear == -1)  cout << "\nStatus: Kosong (Queue Empty!)\n";
	
	else if( rear == front ){
		rear = -1;
		front = -1;
	}
	else if( front == size-1 ){
		front = 0;
	}
	else {
		front++;
	}
}
void travell(int size, int front, int rear, int arr[]) {
	//for (int i = 0; i < rear; i++){
	//	cout << arr[front] << " ";
	//}
	//for (int i = front; i < size - 1; i++){
	//	cout << arr[front] << " ";
	//}

	system("cls");
	if (front == -1) {
		cout << "\nStatus: Kosong (Queue Empty!)\n";
		return;
	}

	cout << "Isi Queue: ";

	// Senario 1: Data tidak berpusing (Linear)
	if (rear >= front) {
		for (int i = front; i <= rear; i++) {
			cout << arr[i] << " ";
		}
	}
	// Senario 2: Data sudah berpusing (Circular)
	else {
		// Papar dari front hingga hujung array
		for (int i = front; i < size; i++) {
			cout << arr[i] << " ";
		}
		// Papar dari awal array hingga rear
		for (int i = 0; i <= rear; i++) {
			cout << arr[i] << " ";
		}
	}
	cout << "\n";
}

// 1. Insert (Enqueue) menggunakan Modulo
void Insert(int size, int& front, int& rear, int arr[]) {
	// Semak jika penuh: (rear + 1) akan melanggar front
	if ((rear + 1) % size == front) {
		cout << "\nStatus: Penuh (Queue Full!)\n";
		return;
	}

	int element;
	cout << "Masukkan nilai: ";
	cin >> element;

	if (front == -1) { // Masuk elemen pertama
		front = 0;
		rear = 0;
	}
	else {
		rear = (rear + 1) % size; // Pusing secara automatik
	}

	arr[rear] = element;
	cout << "Berjaya ditambah.\n";
}

// 2. Delete (Dequeue) menggunakan Modulo
void Delete(int size, int& front, int& rear, int arr[]) {
	if (front == -1) {
		cout << "\nStatus: Kosong (Queue Empty!)\n";
		return;
	}

	cout << "\nElemen " << arr[front] << " telah dibuang.\n";

	if (front == rear) { // Tinggal satu elemen terakhir
		front = rear = -1;
	}
	else {
		front = (front + 1) % size; // Pusing secara automatik
	}
}

// 3. Travel (Display) menggunakan Modulo
void Travel(int size, int front, int rear, int arr[]) {
	if (front == -1) {
		cout << "\nQueue Kosong!\n";
		return;
	}

	cout << "Isi Queue: ";
	int i = front;
	while (true) {
		cout << arr[i] << " ";
		if (i == rear) break; // Berhenti bila sampai ke rear
		i = (i + 1) % size;   // Gerak ke indeks seterusnya secara circular
	}
	cout << "\n";
}

int main(){
	//int array[5];
	//int fornt = 0, rear = 0;
	//int size = sizeof(array) / sizeof(*array);

	//for (int i = 0; i < 5; i++){
	//	insertFornt(i, array, fornt, rear,size);
	//}
	//display(array, fornt, rear);
	//
	//for (int i = 0; i < 6; i++) {
	//	deleteFornt(array, fornt, rear, size);
	//	cout << "\n";
	//	display(array, fornt, rear);
	//} 

	//== yt array

	//int array[5];
	//int front = 0, rear = 0;
	//int size = sizeof(array) / sizeof(*array);
	//int c;
	//while (true){
	//	cout << "\n";
	//	cout << "1) Insert\n2) Show3\n3) Delete\n4) Exit\n >";
	//	cin >> c;
	//	if (c == 1) insert(size, front, rear, array);
	//	if (c == 2) travel(front, rear, array);
	//	if (c == 3) deletee(front, rear, array);
	//	if (c == 4) break;
	//
	//}
	
	//== yt circular

	//int array[5];
	//int front = -1, rear = -1;
	//int size = sizeof(array) / sizeof(*array);
	//int c;
	//while (true){
	//	cout << "\n";
	//	cout << "1) Insert\n2) Show3\n3) Delete\n4) Exit\n >";
	//	cin >> c;
	//	if (c == 1) insertt(size, front, rear, array);
	//	if (c == 2) travell(size, front, rear, array);
	//	if (c == 3) deleteee(size,front, rear, array);
	//	if (c == 4) break;
	//
	//}

	//== pro

	int array[5];
	int front = -1, rear = -1;
	int size = sizeof(array) / sizeof(*array);
	int c;
	while (true){
		cout << "\n";
		cout << "1) Insert\n2) Show3\n3) Delete\n4) Exit\n >";
		cin >> c;
		if (c == 1) Insert(size, front, rear, array);
		if (c == 2) Travel(size, front, rear, array);
		if (c == 3) Delete(size,front, rear, array);
		if (c == 4) break;
	
	}
}
