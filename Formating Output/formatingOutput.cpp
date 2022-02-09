#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    int x,y;
    cout << "Enter two Numbers : ";
    cin >> x >> y;
    int sum = x+y;
    cout <<setw(25) << "Summation is : " << sum;


    cout << showpoint;
    cout <<fixed;
    cout << setprecision(2);
    float substruction = x-y;
    cout <<setw(25) <<"\n Substruction is : "<< substruction;


    int multiplication = x*y;
    cout <<setw(25) << "\n Multiplication is : " <<multiplication;

    cout << noshowpoint;
    float division = (float)x/y ;
    cout << setw(25)<<"\n Division is : " << division;

    int reminder = x%y;
    cout <<setw(25) << " \n Reminder is : " << reminder ;

}
