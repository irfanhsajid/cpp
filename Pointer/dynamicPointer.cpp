#include <bits/stdc++.h>
using namespace std;

int main()

{

    int x, y;
    x = 6;
    int *p = &x;
    int **pp = &p;

    cout << x << endl;
    cout << &x << endl; // 0x7ffd3cd894a4

    cout << p << endl; // 0x7ffd3cd894a4

    cout << &p << endl; // 0x7ffd3cd894a8

    cout << pp << endl; // 0x7ffd3cd894a8

    cout << endl;

    cout << *p << endl;
    cout << *pp << endl;

    cout << **pp << endl;

    **pp = 10;
    cout << x << endl;
}