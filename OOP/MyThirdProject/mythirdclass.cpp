#include <iostream>
#include "mythirdclass.h"
using namespace std;

void MyThirdClass ::display1() const{

    cout << "Printing from Constant Function" <<endl;
}

void MyThirdClass ::display2(){

    cout << "Printing from Non-Constant Function" <<endl;
}
