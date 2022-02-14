#include <iostream>
#include "mysecondclass.h"
using namespace std;

int main()
{
    MySecondClass ob;
    //calling by object
    //ob.display();

    //calling by pointer
    MySecondClass* p= &ob;

    p->display(); //selection Operator
    return 0;
}
