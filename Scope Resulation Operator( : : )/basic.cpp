#include <iostream>
using namespace std;

int x = 10; // global variable

int main()
{

    int x = 5; // local variable

    ::x = 20; // scope resulator

    cout << ::x << endl; // scope resolution operator which sets the global variable value and print = 20

    cout << x; // it will print 5 because local variable has the most priority
}
