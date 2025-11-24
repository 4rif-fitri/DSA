class Studentt : public Info{
private:
	int metric, marks;
public:
	Studentt();
	~Studentt();
	void getInfo(int, int);
	void Print();
};