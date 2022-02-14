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
    // constructor
    Student(int x, double y)
    {
        id = x;
        gpa = y;
    }
};

int main()
{
    // object declaration with constructor
    Student Alim(101, 3.45);
    Alim.display();
    cout << endl;

    Student Asif(201, 4.55);
    Asif.display();
}
