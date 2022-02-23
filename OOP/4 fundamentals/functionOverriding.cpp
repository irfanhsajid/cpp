#include<iostream>
using namespace std;

   class Person {
   public:
        void display() { //over riding function
            cout << "I am a person" <<endl;
        }
   };

    class Student : public Person
    {
    public:
        void display() { //over riding function
            cout << "I am a student" <<endl;
        }
    };

    class Teacher : public Person
    {
    public:
        void display() { //over riding function
            cout << "I am a Teacher" <<endl;
        }
    };

int main(){

    Person p;
    p.display();

    Student s;
    s.display();

    Teacher t;
    t.display();

}
