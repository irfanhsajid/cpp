#include<iostream>
using  namespace std;
class Person
{

    public :
            string name;
            int age;

            void display1(){

                cout << "Name : " <<name <<endl;
                 cout << "age : " <<age <<endl;
            }
};

//inheriting Person class
class Student : public Person
{
    public:
        int id;
        void display2(){

            cout <<"ID : "<<id <<endl;

//cout <<"name : "<<name <<endl;
//cout <<"Age : "<<age <<endl;
                display1();

        }
};

int main(){

    Student s1;
    s1.id = 101;
    s1.name = "Anisul"; //inheritted from person
    s1.age = 27; //inheritted from person
    s1.display2();
}
