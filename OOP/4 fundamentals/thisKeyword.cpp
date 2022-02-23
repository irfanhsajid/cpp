#include <iostream>
using namespace std;

class Student
{
public:
    string name; // class variable

    Student(string name)
    { // name variable
        this -> name = name;
    }

    void display()
    {

        cout << name << endl;
    }
};

int main()
{

    Student s1("Suparna");
    s1.display();
}
