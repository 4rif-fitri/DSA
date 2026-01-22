#include <windows.h>
#include <conio.h>
#include <iostream>
using namespace std;

void static printHome(string MenuList[], int Length, int Baris, HANDLE hConsole) {


	for (int i = 0; i < Length; i++) {
		bool selected = (i == Baris);

		if (selected) {
			SetConsoleTextAttribute(hConsole, 46);
			cout << "> " << MenuList[i] << endl;
		}
		else {
			SetConsoleTextAttribute(hConsole, 7);
			cout << "  " << MenuList[i] << endl;
		}
	}
	SetConsoleTextAttribute(hConsole, 7);

	cout << endl;

}

int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	string menuList[] = {
		"Add Room",
		"Show Table Room",
		"Sort Room By harga",
		"Search Room By Room Number Or Price",
		"Delete Room",
		"Exit",
	};
	int length = sizeof(menuList) / sizeof(*menuList);
	int baris = 0;
	char choice;

		while (true) {
			cout << "\r";

		printHome(menuList, length, baris, hConsole);
		choice = _getch();

		if (choice == 27) break;

		if (choice == 0 || choice == -32) {
			switch (_getch()) {
			case 72:
				baris = (baris == 0 ? length - 1 : baris - 1);
				break;
			case 80:
				baris = (baris + 1) % length;
				break;
			}
		}

		if (choice == 13) {
			//system("cls");
			//if (baris == 0)		 room.AddRoom(hConsole);
			//else if (baris == 1) room.ShowRoom();
			//else if (baris == 2) room.SortRoom(hConsole);
			//else if (baris == 3) room.SearchRoom(hConsole);
			//else if (baris == 4) room.DeleteRoom(hConsole);
			//else if (baris == 5) break;

			_getch();
		}
	}

}

