#include <iostream>
#include <iomanip>
#include <windows.h>
#include <conio.h>
#include <functional> 
#include <string>
#include <limits>
#undef max

using namespace std;

class Room {
public:
	class Node {
	public:
		string name;
		int roomNumber;
		double price;
		string type;
		string isaVailable;
		string dateChackIn;
		string dateChackOut;
		string payment;
		Node* link;
	};
};