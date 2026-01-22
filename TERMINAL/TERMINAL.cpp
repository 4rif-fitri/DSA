#include <iostream>
#include <string>
#include <vector>

using namespace std;

void displayMenu(const vector<string>& menu) {
    system("cls"); // Masih memerlukan 'cls' yang mungkin terhad di OS lain
    cout << "===== MENU UTAMA =====" << endl;
    for (size_t i = 0; i < menu.size(); ++i) {
        cout << i + 1 << ". " << menu[i] << endl;
    }
    cout << "0. Keluar Program" << endl;
    cout << "========================" << endl;
}

int main() {
    vector<string> menuList = {
        "Add Room",
        "Show Table Room",
        "Sort Room",
        "Search Room",
        "Delete Room"
    };

    int choice;

    while (true) {
        displayMenu(menuList);
        cout << "Sila masukkan nombor pilihan anda: ";

        // Menggunakan cin untuk menerima input nombor
        if (!(cin >> choice)) {
            // Pengendalian jika input bukan nombor
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        if (choice == 0) {
            break; // Keluar
        }
        else if (choice >= 1 && choice <= menuList.size()) {
            cout << "Anda memilih: " << menuList[choice - 1] << endl;
            // Panggil fungsi yang relevan (e.g., room.addRoom();)
        }
        else {
            cout << "Pilihan tidak sah. Sila cuba lagi." << endl;
        }

        // Tunggu input sebelum kembali
        cout << "Tekan ENTER untuk teruskan...";
        cin.ignore(10000, '\n');
        cin.get(); // Menunggu Enter
    }

    cout << "Program tamat." << endl;
    return 0;
}