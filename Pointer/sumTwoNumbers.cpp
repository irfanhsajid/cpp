#include<iostream>
using namespace std;
int main()
{

    int x, y ;
    cout << " Enter two numbers : ";

    cin >> x>>y;

    int *p1, *p2;

    p1=&x;
    p2=&y;

    int sum = *p1+*p2;
    cout << "\n Sum of numbers : " <<sum;



}
