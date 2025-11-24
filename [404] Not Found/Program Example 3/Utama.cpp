#include <iostream>
#include "Oloading.h";
using namespace std;
int main()
{
	int month, year;
	double interest, deposit, loan;
	double pay;
	OLoading Siti;
	cout << "Enter loan duration in month: ";
	cin >> month;
	cout << "Enter interest rates: ";
	cin >> interest;
	pay = Siti.Payment(month, interest);
	cout << "Siti Total payment per month: RM" << pay;
	cout << "\n\nEnter Loan for Minah: ";
	cin >> loan;
	OLoading Minah(loan);
	cout << "Enter loan duration in year: ";
	cin >> year;
	cout << "Enter interest rates: ";
	cin >> interest;
	cout << "Enter the deposit: ";
	cin >> deposit;
	pay = Minah.Payment(year, interest, deposit);
	cout << "\nMinah Total payment per month: RM" << pay;
	cout << endl;
	return 0;
}