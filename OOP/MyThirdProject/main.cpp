#include <iostream>
#include "mythirdclass.h"

using namespace std;

int main()
{
//    const int x=10;
//    cout <<x;

    //declaring Constant Object
    const MyThirdClass ob;
    ob.display1();

    MyThirdClass ob2;
    ob2.display2();
    return 0;
}
