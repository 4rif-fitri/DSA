#ifndef TOPUP_H
#define TOPUP_H

#include <iostream>
using namespace std;

template <class T1, class T2>
class Topup
{
private:
    T1 nilai1;
    T2 nilai2;

public:
    Topup(T1, T2);   // constructor
    void Display();  // method to display
    void Execute();  // method to execute
};

#endif
template <class T1, class T2>
Topup<T1, T2>::Topup(T1 x, T2 y)
{
    nilai1 = x;
    nilai2 = y;
}

template <class T1, class T2>
void Topup<T1, T2>::Display()
{
    cout << "Total loan : " << nilai1 << endl;
    cout << "Interest rate : " << nilai2 << endl;
}

template <class T1, class T2>
void Topup<T1, T2>::Execute()
{
    cout << "Total must be paid : "
        << nilai1 + (nilai1 * nilai2) << endl;
}