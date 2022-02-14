#include <iostream>
using namespace std;

void addition(int, int); // this is function prototype
int main()
{
    addition(5, 10);
}
void addition(int a, int b)
{
    int sum = a + b;
    cout << "Addition is : " << sum << endl;
}
