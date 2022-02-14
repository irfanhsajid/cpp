#include<iostream>
using namespace std;

//function protoType
void addition(int, int);
void Subtraction(int, int);
void Multiplication(int, int);
void Division(int, int);
int main()
{
    addition(5,10);
    Subtraction(10,3);
    Multiplication(2,5);
    Division(10,3);

}
void addition (int a, int b)
{
    int sum = a+b;
    cout <<"Addition is : "<< sum <<endl;
}
void Subtraction (int a, int b)
{
    int result = a-b;
    cout <<"Subtraction is : "<< result <<endl;
}
void Multiplication (int a, int b)
{
    int result = a*b;
    cout <<"Multiplication is : "<< result <<endl;
}
void Division (int a, int b)
{
    float result = (float)a/b;
    cout <<"Division is : "<< result <<endl;
}
