#include<iostream>
using namespace std;

int main() {

    int x, y,z;
    cout << "Enter three  numbers : ";

    cin >> x >>y >>z;

    if (x>y && x>z){
    cout << x << " is the max number";
    }
    else if (y>z && y>x){

    cout <<y<< " is the max number";
    }
    else {
    cout << z << " is the max number";
    }



}
