#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *arr = new int[5];
    for (int i = 0; i < 5; i++)
    {
        int n;
        cin >> n;
        arr[i] = n;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
}