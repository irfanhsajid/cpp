#include<iostream>
using namespace std;
int main()
{

    int sum=0, n;
    cout << "Enter the last number : ";
    cin >> n;
    for (int i=0; i<=n; i++)
    {
        sum = sum+i;
    }
    cout << "Sum of Numbers : " <<sum;
}
