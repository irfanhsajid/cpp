#include <iostream>
using namespace std;

int main()
{

    try
    {

        int num1, num2;

        cout << "Enter the value of num1 : ";
        cin >> num1;

        cout << endl
             << "Enter the value of num2 : ";
        cin >> num2;

        if (num2 == 0)
        {
            throw -1;
        }

        double result = (double)num1 / num2;
        cout << "Result : " << result << endl;
    }
    catch (int x)
    {
        cout << "Divide by zero is not possible " << endl
             << "Please Try again.";
    }
}
