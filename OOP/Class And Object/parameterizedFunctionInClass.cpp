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

    void setValue (int x, double y)
    {
        id=x;
        gpa = y;
    }
};

int main()
{
    // object declaration

    Student Alim;
    Alim.setValue(101,3.45);
    Alim.display();
    cout << endl;


    Student Asif;
    Asif.setValue(201, 4.55);
    Asif.display();
}
