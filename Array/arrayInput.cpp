#include<iostream>
using namespace std;
int main()
{

    int marks[5];
   // cin >> marks[0];
   // cin >> marks[1];
   // cin >> marks[2];
   // cin >> marks[3];
   // cin >> marks [4];

   for (int i =0;i<5;i++){
   cout << "Marks for student " <<i+1 <<" : ";
   cin >> marks[i];
   }
    cout << "Elements are : ";
    for(int i=0; i<=4; i++)
    {
        cout << marks[i] << " ";
    }


}
