#include <iostream>
using namespace std;
int main()
{

   double area, base, height;
   cout << "Enter the base and height: ";
   cin >> base >> height;

   area = (double)1 / 2 * base * height;
   // area = 0.5*base*height;

   cout << "Area of the triangle is :" << area;
}
