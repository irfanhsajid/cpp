
#include <iostream>
using namespace std;
int main()
{

    // increment
    int x = 5;
    int y = x++;
    cout << x << endl; // 6
    cout << y;         // 5
    cout << endl;
    cout << "................................";
    cout << endl;

    // decrement
    int x1 = 5;
    int y1 = x1--;
    cout << x1 << endl; // 4
    cout << y1 << endl; // 5

    //...........................

    int a = 10;
    int b = ++a;
    cout << b << endl; // 11

    b = --a;
    cout << b << endl; // 10
}
