#include "mysecondclass.h"
#include<iostream>
using namespace std;

MySecondClass::MySecondClass()
{
    cout << "Constructor is called" <<endl;
}

MySecondClass :: ~MySecondClass()
{

    cout << "Destructor is Called" <<endl;
}

void MySecondClass ::display()
{

    cout << "Display Function is called" <<endl;

}
