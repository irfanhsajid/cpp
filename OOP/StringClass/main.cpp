#include <iostream>
#include <string>
using namespace std;

int main()
{
   string str1 = "irfan";
   string str2 = "Haque";
   string str3;

   str3 = str1;
   cout << "str3 is : " << str3 << endl;

   str3 = str1 + str2;
   cout << "str1+str2 = " << str3 << endl;

   int len = str1.size();
   cout << "length of str1 : " << len;
}
