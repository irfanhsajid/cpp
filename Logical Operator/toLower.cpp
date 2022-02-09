#include<iostream>
using namespace std ;

int main (){


char ch;
cout << "Insert any letter : ";
cin >> ch;
ch = tolower(ch);
 if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {

    cout << ch << " is  vowel";

    }
    else {

    cout << ch <<" is consonant ";
    }

}
