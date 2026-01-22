template<class T>
class Operation {

public:
	Operation();
	~Operation();
	T display(T, T, char);
};

template<class T>
Operation<T>::Operation() {};

template<class T>
Operation<T>::~Operation() {};

template<class T>
T Operation<T>::display(T a, T b, char opt) {
	
	if (opt == '+'){
		return a + b;
	}
	else if (opt == '-') {
		return a - b;
	}
	else if (opt == '*'){
		return a * b;
	}
	else if (opt == '/') {
		if (b != 0)
		{
			return a / b;
		}
		else {
			cout << "Error: Division by zero";
			return;
		}
	}

};