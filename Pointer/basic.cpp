#include<iostream>
using namespace std;

int main ()
{

    int x = 5;
    int *ptr;
    ptr = &x;

    cout << "Value of x : " <<x <<endl;
    cout << "Address of x : "<< &x <<endl;

    cout << "Pointer variable stores here : " <<*ptr <<endl ;
    cout << " Value of pointer : " << *ptr;


}
