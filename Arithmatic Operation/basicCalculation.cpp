
#include<iostream>
using namespace std;

int main(){

    int x,y;
    cout << "Enter two Numbers : ";
    cin >> x >> y;
    int sum = x+y;
    cout << "Summation is : " << sum;

    int multiplication = x*y;
    cout << "\n Multiplication is : " <<multiplication;

    float division = (float)x/y ;
    cout <<"\n Division is : " << division;

    int reminder = x%y;
    cout << " \n Reminder is : " << reminder ;

}
