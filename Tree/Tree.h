//template<class T>
//class Tree {
//private:
//	class Node {
//	public:
//		T info;
//		Node* left;
//		Node* right;
//	};
//	Node* root;
//
//public:
//	Tree() {
//		root = NULL;
//	}
//	~Tree(){}
//	bool isEmpty() {
//		return (root == NULL);
//	}
//	int NumberOfNodes() {
//		return CountNodes(root);
//	}
//	int CountNodes(Node* root) {
//		if (root == NULL) return 0;
//		else return CountNodes(root->left) + CountNodes(root->right) + 1;
//	}
//	void InsertItem(T item) {
//		Insert(root,item);
//	}
//	void Insert(Node*& root, T item) {
//		if (root == NULL) {
//			root = new Node;
//			root->right = NULL;
//			root->left = NULL;
//			root->info = NULL;
//		}
//		else if (item < root->info)
//			Insert(root->left, item);
//		else
//			Insert(root->right, item);
//	}
//	void DeleteItem(T item) {
//		Delete(root, item);
//	}
//	void Delete(Node*& root, T item) {
//		if (root == NULL) return;
//		if (item < root->info) Delete(root->left, item);
//		if (item > root->info) Delete(root->right, item);
//		else DeleteNode(root);
//	}
//	void DeleteNode(Node*& root) {
//		T data;
//		Node* temPtr;
//		temPtr = root;
//
//		if (root->left == NULL && root->left == NULL) {
//			root = NULL;
//			delete temPtr;
//		}
//		else if (root->left == NULL) {
//			root = root->right;
//			delete temPtr;
//		}
//		else if (root->right == NULL) {
//			root = root->left;
//			delete temPtr;
//		}
//		else {
//			GetPredecessor(root->left, data);
//			root->info = data;
//			Delete(root->left, data);
//		}
//	}
//
//	void RetrieveItem(T& item, bool& found) {
//		Retrieve(root,item,found);
//	}
//	void Retrieve(Node*root, T item, bool& found) {
//		if (root == NULL) found = false;
//		else if (item < root->info) Retrieve(root->left, item, found);
//		else if (item > root->info) Retrieve(root->right, item, found);
//		else found = true;
//	}
//
//	void GetPredecessor(Node*& root,T& data){
//		Node* Ptree = root;
//		while (Ptree->right != NULL){
//			Ptree = Ptree->right;
//		}
//		data = Ptree->info;
//	}
//	void PrintTree() {
//		Print(root);
//	}
//
//	void Print(Node* root) {
//		if (root != NULL) {
//			Print(root->left);
//			cout << root->info << "";
//			Print(root->left);
//		}
//	}
//};

#ifndef TREE_H
#define TREE_H

#include <iostream>
using namespace std;

template<class T>
class Tree {
private:
    class Node {
    public:
        T info;
        Node* left;
        Node* right;
    };

    Node* root;

    // ====== PRIVATE FUNCTIONS ======
    void Insert(Node*& root, T item) {
        if (root == NULL) {
            root = new Node;
            root->info = item;
            root->left = NULL;
            root->right = NULL;
        }
        else if (item < root->info)
            Insert(root->left, item);
        else
            Insert(root->right, item);
    }

    int CountNodes(Node* root) {
        if (root == NULL) return 0;
        return CountNodes(root->left) + CountNodes(root->right) + 1;
    }

    void Retrieve(Node* root, T item, bool& found) {
        if (root == NULL)
            found = false;
        else if (item < root->info)
            Retrieve(root->left, item, found);
        else if (item > root->info)
            Retrieve(root->right, item, found);
        else
            found = true;
    }

    void Delete(Node*& root, T item) {
        if (root == NULL) return;

        if (item < root->info)
            Delete(root->left, item);
        else if (item > root->info)
            Delete(root->right, item);
        else
            DeleteNode(root);
    }

    void DeleteNode(Node*& root) {
        Node* temp = root;

        // tiada anak
        if (root->left == NULL && root->right == NULL) {
            root = NULL;
            delete temp;
        }
        // satu anak (kanan)
        else if (root->left == NULL) {
            root = root->right;
            delete temp;
        }
        // satu anak (kiri)
        else if (root->right == NULL) {
            root = root->left;
            delete temp;
        }
        // dua anak
        else {
            T data;
            GetPredecessor(root->left, data);
            root->info = data;
            Delete(root->left, data);
        }
    }

    void GetPredecessor(Node* root, T& data) {
        while (root->right != NULL)
            root = root->right;
        data = root->info;
    }

    void Print(Node* root) {
        if (root != NULL) {
            Print(root->left);
            cout << root->info << " ";
            Print(root->right);
        }
    }

public:
    // ====== PUBLIC FUNCTIONS ======
    Tree() {
        root = NULL;
    }

    bool isEmpty() {
        return root == NULL;
    }

    void InsertItem(T item) {
        Insert(root, item);
    }

    void DeleteItem(T item) {
        Delete(root, item);
    }

    void RetrieveItem(T item, bool& found) {
        Retrieve(root, item, found);
    }

    int NumberOfNodes() {
        return CountNodes(root);
    }

    void PrintTree() {
        Print(root);
    }
};

#endif
