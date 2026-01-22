#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

/* ---------- INSERT ---------- */
void insert(Node*& head, int value) {
    Node* n = new Node{ value, nullptr };
    if (!head) {
        head = n;
        return;
    }
    Node* temp = head;
    while (temp->next)
        temp = temp->next;
    temp->next = n;
}

/* ---------- DISPLAY ---------- */
void display(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

/* ---------- PARTITION ---------- */
Node* partition(Node* head, Node* end,
    Node** newHead, Node** newEnd) {

    Node* pivot = end;
    Node* prev = nullptr;
    Node* curr = head;
    Node* tail = pivot;

    cout << "\nPivot = " << pivot->data << endl;

    while (curr != pivot) {
        cout << "Banding: " << curr->data << " dengan pivot\n";

        if (curr->data < pivot->data) {
            if (!(*newHead))
                *newHead = curr;
            prev = curr;
            curr = curr->next;
        }
        else {
            if (prev)
                prev->next = curr->next;

            Node* temp = curr->next;
            curr->next = nullptr;
            tail->next = curr;
            tail = curr;
            curr = temp;

            cout << "Pindah node ke belakang pivot\n";
        }

        cout << "Keadaan list: ";
        display(*newHead ? *newHead : pivot);
    }

    if (!(*newHead))
        *newHead = pivot;

    *newEnd = tail;
    return pivot;
}

/* ---------- QUICK SORT RECURSIVE ---------- */
Node* quickSortRecur(Node* head, Node* end) {
    if (!head || head == end)
        return head;

    Node* newHead = nullptr;
    Node* newEnd = nullptr;

    Node* pivot = partition(head, end, &newHead, &newEnd);

    if (newHead != pivot) {
        Node* temp = newHead;
        while (temp->next != pivot)
            temp = temp->next;
        temp->next = nullptr;

        newHead = quickSortRecur(newHead, temp);

        temp = newHead;
        while (temp->next)
            temp = temp->next;
        temp->next = pivot;
    }

    pivot->next = quickSortRecur(pivot->next, newEnd);
    return newHead;
}

/* ---------- QUICK SORT ---------- */
void quickSort(Node*& head) {
    Node* end = head;
    while (end->next)
        end = end->next;
    head = quickSortRecur(head, end);
}

/* ---------- SEQUENTIAL SEARCH ---------- */
bool sequentialSearch(Node* head, int key) {
    int step = 1;
    while (head) {
        cout << "Step " << step++
            << ": banding " << head->data << endl;

        if (head->data == key)
            return true;
        head = head->next;
    }
    return false;
}

/* ---------- MIDDLE ---------- */
Node* middle(Node* start, Node* end) {
    Node* slow = start;
    Node* fast = start->next;

    while (fast != end) {
        fast = fast->next;
        if (fast != end) {
            slow = slow->next;
            fast = fast->next;
        }
    }
    return slow;
}

/* ---------- BINARY SEARCH ---------- */
bool binarySearch(Node* head, int key) {
    Node* start = head;
    Node* end = nullptr;
    int step = 1;

    while (start != end) {
        Node* mid = middle(start, end);
        if (!mid) return false;

        cout << "Step " << step++
            << ": mid = " << mid->data << endl;

        if (mid->data == key)
            return true;
        else if (mid->data < key)
            start = mid->next;
        else
            end = mid;
    }
    return false;
}

/* ---------- MAIN --------f-- */
int main() {
    Node* head = nullptr;

    insert(head, 40);
    insert(head, 10);
    insert(head, 70);
    insert(head, 30);
    insert(head, 20);

    cout << "Linked List asal: ";
    display(head);

    cout << "\n--- QUICK SORT ---\n";
    quickSort(head);

    cout << "\nSelepas sort: ";
    display(head);

    int key = 30;

    cout << "\n--- SEQUENTIAL SEARCH ---\n";
    cout << (sequentialSearch(head, key) ? "Jumpa\n" : "Tak jumpa\n");

    cout << "\n--- BINARY SEARCH ---\n";
    cout << (binarySearch(head, key) ? "Jumpa\n" : "Tak jumpa\n");

    return 0;
}
