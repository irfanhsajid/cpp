#include<iostream>
using namespace std;

class Student
{

public :
    const int admissionFee;
    const int examFee;
    int id;

    Student(int x, int y, int z) //constructor
    : admissionFee(x) , examFee(y) //member initializer
    {
        cout <<admissionFee <<endl;
        cout <<examFee <<endl;
        id = z;
        cout << "Id = " <<id;
    }

};


int main()
{

    Student s1(15000,500, 101);


}
