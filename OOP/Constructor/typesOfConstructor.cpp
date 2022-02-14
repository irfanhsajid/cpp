#include <iostream>
using namespace std;

class Student
{

public:
    int id;
    double gpa;

    void display()
    {
        cout << id << " " << gpa;
    }
    // parameterized constructor
    Student(int x, double y)
    {
        id = x;
        gpa = y;
    }
    //default constructor
    Student (){
        cout << "Default Constructor!" <<endl ;
    }
};

int main()
{
    //default constructor
    Student ob;

    // object declaration with constructor
    Student Alim(101, 3.45);
    Alim.display();

    cout << endl;

    Student Asif(201, 4.55);
    Asif.display();
}

