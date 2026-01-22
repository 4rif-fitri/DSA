//#include <iostream>
//using namespace std;
//
//#include "Tree.h"
//
//int main(){
//	Tree<int> BST;
//	int itemI, itemD, itemR;
//	bool found = true;
//	cout << "Input data or 0 to stop: " << endl;
//	cin >> itemI;
//
//	while (itemI != 0){
//		BST.InsertItem(itemI);
//		cin >> itemI;
//	}
//	cout << "Input data to be deleted: ";
//	cin >> itemD;
//	if (BST.isEmpty()) cout << "Empty Tree" << endl;
//	else BST.RetrieveItem(itemR, found);
//
//	cout << "\nInput data to be searched: ";
//	cin >> itemR;
//
//	BST.RetrieveItem(itemR, found);
//	if (found == true) cout << "Data found!" << endl;
//	else cout << "Data not found!" << endl;
//	
//	cout << "Data in order" << endl;
//	BST.PrintTree();
//}

#include <iostream>
using namespace std;

#include "Tree.h"

int main() {
    Tree<int> BST;
    int itemI, itemD, itemR;
    bool found;

    cout << "Input data (0 to stop): ";
    cin >> itemI;

    while (itemI != 0) {
        BST.InsertItem(itemI);
        cin >> itemI;
    }

    cout << "\nInput data to be deleted: ";
    cin >> itemD;

    if (BST.isEmpty())
        cout << "Tree is empty\n";
    else
        BST.DeleteItem(itemD);

    cout << "\nInput data to be searched: ";
    cin >> itemR;

    BST.RetrieveItem(itemR, found);
    if (found)
        cout << "Data found!\n";
    else
        cout << "Data not found!\n";

    cout << "\nData in-order: ";
    BST.PrintTree();

    cout << "\nTotal nodes: " << BST.NumberOfNodes() << endl;

    return 0;
}
