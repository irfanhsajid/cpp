#include <bits/stdc++.h>
using namespace std;
int main()
{
    string line;
    ifstream file("read.txt");
    while (getline(file, line))
    {

        cout << line << endl;
    }
    file.close();
}