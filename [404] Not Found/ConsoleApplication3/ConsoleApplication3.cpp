//#include <iostream>
//#include <conio.h>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//void paparkanMenu(const vector<string>& menu, int pilihan) {
//    system("cls");
//    cout << "Gunakan Arrow Up/Down untuk pilih, Enter untuk confirm, ESC untuk keluar.\n\n";
//
//    for (int i = 0; i < menu.size(); i++)
//        cout << (i == pilihan ? "=> " : "   ") << menu[i] << endl;
//}
//
//int main() {
//    vector<string> menu = { "Mula Permainan", "Tetapan", "Bantuan", "Keluar" };
//    int pilihan = 0;
//    char ch;
//
//    while (true) {
//        paparkanMenu(menu, pilihan);
//        ch = _getch();
//
//        if (ch == 27) break; // ESC
//
//        if (ch == 0 || ch == -32) {
//            switch (_getch()) {
//            case 72: pilihan = (pilihan == 0 ? menu.size() - 1 : pilihan - 1); break; // UP
//            case 80: pilihan = (pilihan + 1) % menu.size(); break; // DOWN
//            }
//        }
//
//        if (ch == 13) { // ENTER
//            system("cls");
//            cout << "Anda pilih: " << menu[pilihan] << "\n";
//            if (menu[pilihan] == "Keluar") break;
//            cout << "Tekan apa-apa untuk kembali ke menu.\n";
//            _getch();
//        }
//    }
//
//    return 0;
//}

//#include <iostream>
//#include <conio.h>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//struct Item {
//    int id;
//    string nama;
//    double harga;
//};
//
//void paparkanTable(const vector<Item>& table, int pilihan) {
//    system("cls");
//    cout << "Gunakan Arrow Up/Down untuk pilih, Enter untuk confirm, ESC untuk keluar.\n\n";
//
//    for (int i = 0; i < table.size(); i++) {
//        if (i == pilihan)
//            cout << "=> ";
//        else
//            cout << "   ";
//
//        cout << table[i].id << "\t" << table[i].nama << "\t" << table[i].harga << endl;
//    }
//}
//
//int main() {
//    vector<Item> table = {
//        {1, "Epal", 2.5},
//        {2, "Pisang", 1.2},
//        {3, "Oren", 3.0},
//        {4, "Mangga", 4.0}
//    };
//
//    int pilihan = 0;
//    char ch;
//
//    while (true) {
//        paparkanTable(table, pilihan);
//        ch = _getch();
//
//        if (ch == 27) break; // ESC
//
//        if (ch == 0 || ch == -32) {
//            switch (_getch()) {
//            case 72: pilihan = (pilihan == 0 ? table.size() - 1 : pilihan - 1); break; // UP
//            case 80: pilihan = (pilihan + 1) % table.size(); break; // DOWN
//            }
//        }
//
//        if (ch == 13) { // ENTER
//            system("cls");
//            cout << "Anda pilih: " << table[pilihan].nama
//                << " dengan harga RM" << table[pilihan].harga << "\n";
//            cout << "Tekan apa-apa untuk kembali ke table.\n";
//            _getch();
//        }
//    }
//
//    return 0;
//}


//#include <iostream>
//#include <conio.h>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//struct Item {
//    int id;
//    string nama;
//    double harga;
//};
//
//void paparkanTable(const vector<Item>& table, int baris, int kolom) {
//    system("cls");
//    cout << "Gunakan Arrow Up/Down untuk baris, Left/Right untuk kolom, Enter untuk pilih, ESC untuk keluar.\n\n";
//
//    cout << "ID\tNama\tHarga\n";
//    for (int i = 0; i < table.size(); i++) {
//        if (i == baris) {
//            // highlight berdasarkan kolom
//            cout << (kolom == 0 ? "=> " : "   ") << table[i].id << "\t";
//            cout << (kolom == 1 ? "=> " : "   ") << table[i].nama << "\t";
//            cout << (kolom == 2 ? "=> " : "   ") << table[i].harga << endl;
//        }
//        else {
//            cout << "   " << table[i].id << "\t" << table[i].nama << "\t" << table[i].harga << endl;
//        }
//    }
//}
//
//int main() {
//    vector<Item> table = {
//        {1, "Epal", 2.5},
//        {2, "Pisang", 1.2},
//        {3, "Oren", 3.0},
//        {4, "Mangga", 4.0}
//    };
//
//    int baris = 0;
//    int kolom = 0; // 0=ID,1=Nama,2=Harga
//    char ch;
//
//    while (true) {
//        paparkanTable(table, baris, kolom);
//        ch = _getch();
//
//        if (ch == 27) break; // ESC
//
//        if (ch == 0 || ch == -32) {
//            switch (_getch()) {
//            case 72: baris = (baris == 0 ? table.size() - 1 : baris - 1); break; // UP
//            case 80: baris = (baris + 1) % table.size(); break;                 // DOWN
//            case 75: kolom = (kolom == 0 ? 2 : kolom - 1); break;               // LEFT
//            case 77: kolom = (kolom + 1) % 3; break;                             // RIGHT
//            }
//        }
//
//        if (ch == 13) { // ENTER
//            system("cls");
//            cout << "Anda pilih: ";
//            if (kolom == 0) cout << table[baris].id;
//            else if (kolom == 1) cout << table[baris].nama;
//            else cout << table[baris].harga;
//            cout << "\nTekan apa-apa untuk kembali ke table.\n";
//            _getch();
//        }
//    }
//
//    return 0;
//}

//#include <iostream>
//#include <conio.h>
//#include <vector>
//#include <string>
////#include <windows.h>  // Untuk SetConsoleTextAttribute
//#include <Windows.h>
//using namespace std;
//
//struct Item {
//    int id;
//    string nama;
//    double harga;
//};
//
//// Fungsi untuk highlight baris dengan warna
//void highlightBaris(const string& text, bool selected) {
//    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//    if (selected) {
//        SetConsoleTextAttribute(hConsole, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE); // putih background
//        //SetConsoleTextAttribute(hConsole | FOREGROUND_INTENSITY); // pastikan terang
//        SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY);
//        SetConsoleTextAttribute(hConsole, 0x70); // Background putih (7) dan text hitam
//    }
//    else {
//        SetConsoleTextAttribute(hConsole, 7); // normal
//    }
//    cout << text << endl;
//    SetConsoleTextAttribute(hConsole, 7); // reset warna
//}
//
//void paparkanTable(const vector<Item>& table, int pilihan) {
//    system("cls");
//    cout << "Gunakan Arrow Up/Down untuk pilih baris, Enter untuk pilih, ESC untuk keluar.\n\n";
//    cout << "ID\tNama\tHarga\n";
//
//    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//
//    for (int i = 0; i < table.size(); i++) {
//        if (i == pilihan)
//            SetConsoleTextAttribute(hConsole, 0x70); // background putih, text hitam
//        else
//            SetConsoleTextAttribute(hConsole, 7); // normal
//
//        cout << table[i].id << "\t" << table[i].nama << "\t" << table[i].harga << endl;
//    }
//
//    SetConsoleTextAttribute(hConsole, 7); // reset warna
//}
//
//int main() {
//    vector<Item> table = {
//        {1, "Epal", 2.5},
//        {2, "Pisang", 1.2},
//        {3, "Oren", 3.0},
//        {4, "Mangga", 4.0}
//    };
//
//    int pilihan = 0;
//    char ch;
//
//    while (true) {
//        paparkanTable(table, pilihan);
//        ch = _getch();
//
//        if (ch == 27) break; // ESC
//
//        if (ch == 0 || ch == -32) {
//            switch (_getch()) {
//            case 72: pilihan = (pilihan == 0 ? table.size() - 1 : pilihan - 1); break; // UP
//            case 80: pilihan = (pilihan + 1) % table.size(); break;                 // DOWN
//            }
//        }
//
//        if (ch == 13) { // ENTER
//            system("cls");
//            cout << "Anda pilih: " << table[pilihan].nama
//                << " dengan harga RM" << table[pilihan].harga << "\n";
//            cout << "Tekan apa-apa untuk kembali ke table.\n";
//            _getch();
//        }
//    }
//
//    cout << "Program tamat.\n";
//    return 0;
//}


#include <iostream>
#include <conio.h>
#include <vector>
#include <string>
#include <windows.h>

using namespace std;

struct Item {
    int id;
    string nama;
    double harga;
};

// Fungsi untuk papar table dengan satu sel dihighlight
void paparkanTable(const vector<Item>& table, int baris, int kolom) {
    system("cls");
    cout << "Gunakan Arrow Up/Down/Left/Right untuk pilih sel, Enter untuk pilih, ESC untuk keluar.\n\n";
    cout << "ID\tNama\tHarga\n";

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    for (int i = 0; i < table.size(); i++) {
        for (int j = 0; j < 3; j++) {
            bool selected = (i == baris && j == kolom);

            if (selected)
                SetConsoleTextAttribute(hConsole, 0x70); // background putih, text hitam
            else
                SetConsoleTextAttribute(hConsole, 7);    // normal

            if (j == 0) cout << table[i].id << "\t";
            else if (j == 1) cout << table[i].nama << "\t";
            else if (j == 2) cout << table[i].harga << "\t";
        }
        cout << endl;
    }

    SetConsoleTextAttribute(hConsole, 7); // reset warna
}

int main() {
    vector<Item> table = {
        {1, "Epal", 2.5},
        {2, "Pisang", 1.2},
        {3, "Oren", 3.0},
        {4, "Mangga", 4.0}
    };

    int baris = 0;
    int kolom = 0; // 0=ID,1=Nama,2=Harga
    char ch;

    while (true) {
        paparkanTable(table, baris, kolom);
        ch = _getch();

        if (ch == 27) break; // ESC

        if (ch == 0 || ch == -32) {
            switch (_getch()) {
            case 72: baris = (baris == 0 ? table.size() - 1 : baris - 1); break; // UP
            case 80: baris = (baris + 1) % table.size(); break;                 // DOWN
            case 75: kolom = (kolom == 0 ? 2 : kolom - 1); break;               // LEFT
            case 77: kolom = (kolom + 1) % 3; break;                             // RIGHT
            }
        }

        if (ch == 13) { // ENTER
            system("cls");
            cout << "Anda pilih sel: ";
            if (kolom == 0) cout << table[baris].id;
            else if (kolom == 1) cout << table[baris].nama;
            else cout << table[baris].harga;

            cout << "\nTekan apa-apa untuk kembali ke table.\n";
            _getch();
        }
    }

    cout << "Program tamat.\n";
    return 0;
}
