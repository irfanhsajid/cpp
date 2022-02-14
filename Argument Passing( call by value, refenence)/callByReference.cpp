
#include<iostream>
using namespace std;

void display(int *num){

 *num = 20; //formal parameter

}

int main(){

    int x = 10;
    cout << "Before calling the function : " << x <<endl;

    display(&x) ; //actual parameter will be changed
    cout << "After calling the function : " << x <<endl;

}




