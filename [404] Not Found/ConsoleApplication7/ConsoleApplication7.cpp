#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

void color(int c) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void ccc() {
    cout << char(218); // ┌
    for (int i = 0; i < 20; i++) cout << char(196); // ─
    cout << char(191) << endl; // ┐

    cout << char(179) << "  Menu Program     " << char(179) << endl; // │ text │

    cout << char(192); // └
    for (int i = 0; i < 20; i++) cout << char(196);
    cout << char(217) << endl; // ┘

}

int main() {
    string menu[] = { "Start", "Settings", "Exit" };
    int choice = 0;

    while (true) {
        system("cls");
        ccc();

        for (int i = 0; i < 3; i++) {
            if (i == choice) color(10); // Hijau highlight
            else color(7);

            cout << " > " << menu[i] << endl;
        }

        char key = _getch();

        if (key == 72) choice = (choice - 1 + 3) % 3; // Up Arrow
        else if (key == 80) choice = (choice + 1) % 3; // Down Arrow
        else if (key == 13) break; // Enter
    }

    color(7);
    cout << "You selected: " << menu[choice] << endl;
}
