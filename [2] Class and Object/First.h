class First {

	friend class Second;

private:
	int x;
public:
	First();
	~First();
	void setX(int);
	void printData();
};