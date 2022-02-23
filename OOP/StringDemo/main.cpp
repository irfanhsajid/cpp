#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char name1[] = "Anisul";
    char name2[10];
    // strlen
    int len = strlen(name1);
    cout << "Length of String : " << len << endl;
    // strcpy
    strcpy(name2, name1);
    cout << "Name 2 is : " << name2 << endl;

    // strcat

    char ch[] = "Saudi";
    char ch2[] = " Arabia";

    strcat(ch, ch2);
    cout << ch << endl;

    // strupr / strlwr
    char name[] = "irfanul haque";
    //    strupr(name);
    cout << name << endl;

    // string compare - strcmp
    int value = strcmp(ch, ch2);

    if (value == 0)
    {
        cout << "Strings are equal " << endl;
    }
    else
    {
        cout << "Strings are not equal ";
    }
}
