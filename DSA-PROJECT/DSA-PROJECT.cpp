#include <iostream>
#include <conio.h>
#include <string>
#include <windows.h>
using namespace std;

#include "Room.h"
//#include "AddRoom.h"
//#include "DeleteRoom.h"
//#include "SearchRoom.h"
//#include "SortRoom.h"
//#include "ShowRoom.h"

static void frontPage(string MenuList[],int Length,int Baris, HANDLE hConsole) {
	system("cls");

	for (size_t i = 0; i < Length; i++){
		bool selected = (i == Baris);
		
		if (selected) {
			SetConsoleTextAttribute(hConsole, 0x70);
		}else {
			SetConsoleTextAttribute(hConsole, 7);
		}
		cout << i+1 << ". " << MenuList[i] << endl;
	}
	SetConsoleTextAttribute(hConsole, 7);

}

int main(){
	Room room;
	//AddRoom addRoom(room);
	//ShowRoom showRoom(room);
	//SortRoom sortRoom(room);
	//SearchRoom searchRoom(room);
	//DeleteRoom deleteRoom(room);

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	string menuList[] = {
		"Add Room",
		"Show Table Room",
		"Sort Room",
		"Search Room",
		"Delete Room",
		"Exit",
	};

	int length = sizeof(menuList) / sizeof(*menuList);
	int baris = 0;
	char choice;

	while (true){
		frontPage(menuList, length, baris, hConsole);
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
			system("cls");
			if (baris == 0) {
				room.AddBack();
			}
			else if (baris == 1) {
			}
			else if (baris == 2) {
			}
			else if (baris == 3) {
			}
			else if (baris == 4) {
			}
			else if (baris == 5) {
				break;
			}

			_getch();
		}
	}

	SetConsoleTextAttribute(hConsole, 0x1F);
	cout << "\n\n" << "Program Tamat :( " << "\n\n";
	SetConsoleTextAttribute(hConsole, 7);

}
