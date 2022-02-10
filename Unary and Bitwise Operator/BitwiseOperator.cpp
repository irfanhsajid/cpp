
#include <iostream>
using namespace std;

int main()
{

    int a = 32;
    int b = 12;
    int c;
    // bitwise AND
    c = a & b;
    cout << c << endl;
    // bitwise OR
    c = a | b;
    cout << c << endl;
    // bitwise X-OR
    c = a ^ b;
    cout << c << endl;

    // right shift
    c = a >> 3;
    cout << c << endl;

    // left-shift
    c = a << 3;
    cout << c << endl;
}
