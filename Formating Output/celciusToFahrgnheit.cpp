#include <iostream>
using namespace std;

int main()
{

    float c, f;
    cout << "Enter the celcius temparature : ";
    cin >> c;
    f = 1.8 * c + 32;
    cout << "\n Fahrenheit will be : " << f;
    cout << endl;
    float fahrenheight, celcius;
    cout << "Enter the Fahrenheit temp : ";
    cin >> fahrenheight;
    celcius = (fahrenheight - 32) / 1.8;
    cout << "\n Celcius will be : " << celcius;
}
