#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    /*
    //basics of file
     ofstream file;
     file.open("student.txt");

     file << "I am Irfanul Haque. I am 22 years old" <<endl;
     file.close();

     */

    // taking user input in file
    string name;
    ofstream file;
    file.open("student.txt", ios::out | ios::app);

    cout << "Enter your name : ";
    getline(cin, name);

    file << "Welcome " << name << endl;
    file.close();
}
