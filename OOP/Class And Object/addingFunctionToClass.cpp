#include <iostream>
using namespace std;

class Student
{

public:
    int id;
    double gpa;
    //declaring function
    void display(){
          cout << id << " " << gpa;

    }
};

int main()
{
    // object declaration
    Student Alim;
    Alim.id = 101;
    Alim.gpa = 3.55;
    Alim.display();
    cout << endl;

    // another object (Asif)
    Student Asif;
    Asif.id = 102;
    Asif.gpa = 3.90;
    Asif.display();
}
