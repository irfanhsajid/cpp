#include <iostream>
using namespace std;

//for the same data type
template <class MyTemplate>


MyTemplate add(MyTemplate a, MyTemplate b)
{

    return a + b;
}



//for multiple parameters (data type)
template <class MyTemplate1, class MyTemplate2>
MyTemplate1 add2(MyTemplate1 x, MyTemplate2 y)
{

    return x + y;
}

int main()
{

    cout << add(10.6655555, 20.877777777) << endl;
    cout << add2(10, 20.776556) << endl;

}
