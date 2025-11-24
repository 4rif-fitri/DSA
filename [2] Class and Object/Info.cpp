#include<iostream>
#include<string>
#include "Info.h"
using namespace std;

Info::Info() { }
Info::~Info() { }

void Info::getInfo(int ic, char sn) {
	id = ic;
	name = n;
	//strcpy(name, n);
}
void Info::Print() {
	cout << "\nID: " << id;
	cout << "\nName: " << name << endl;
}