template<class T>

class Multiplication {
private:
	T a; 
	T b;
public:
	Multiplication();
	~Multiplication();
	T darab(T x, T y);
};

template<class T>
Multiplication<T>::Multiplication() {}

template<class T>
Multiplication<T>::~Multiplication() {}

template<class T>
T Multiplication<T>::darab(T x, T y) {
	return x * y;
}


