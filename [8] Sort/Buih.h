const int SIZE = 5;

template <class T>
class Buih {
public:
	T array[SIZE];
	void bubblesort(T list[], int last);
};

template <class T>
void Buih<T>::bubblesort(T list[], int last) {
	int current = 0, walker = 0, temp = 0;
	bool sorted = true;

	for(current = 0, sorted = false; current <= last && !sorted; current++){

		for (walker = last, sorted = true; walker > current; walker--){

			if (list[walker] < list[walker-1]) {
				sorted = false;
				temp = list[walker];
				list[walker] = list[walker - 1];
				list[walker - 1] = temp;
			}

		}

	}
}
