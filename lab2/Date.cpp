#include "Date.h"

Date::Date() {
	day = 10;
	month = 12;
	year = 2001;
}

//Date::Date(int d, int m, int y) {
//	day = d;
//	month = m;
//	year = y;
//}

Date::~Date() {}

void Date::setDate(int d, int m, int y) {
	day = d;
	month = m;
	year = y;
}

void Date::printDate() {
	cout << "Day : " << day;
	cout << " Month : " << month;
	cout << " Year : " << year;
	cout << endl;
}
