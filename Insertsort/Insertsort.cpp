#include <iostream>
using namespace std;

int main() {

    int arr[] = { 2,3,6,5,1 };
    int length = sizeof(arr) / sizeof(*arr);

    for (int i = 1; i < length; i++) {
        for (int j = i; j > 0; j--) {


            if (arr[j] < arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
            }
            else {
                break;
            }
        }
    }

    cout << endl << endl << "Sorted: ";
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
