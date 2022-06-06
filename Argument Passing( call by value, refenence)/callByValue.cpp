#include <iostream>
using namespace std;

void display(int x)
{

    x = 20; // formal parameter
    cout << "Function parameter value : " << x << endl;
}

int main()
{

    int x1 = 10;
    // cout << "Before calling the function : " << x << endl;

    display(x1); // actual parameter
    cout << "After calling the function : " << x1 << endl;
}
