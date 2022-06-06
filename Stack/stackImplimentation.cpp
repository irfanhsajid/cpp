#include <bits/stdc++.h>
using namespace std;
class Stack
{
private:
    int top;
    int arr[5];

public:
    Stack()
    {
        top = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }
    bool isEmpty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }
    bool isFull()
    {
        if (top == 4)
            return true;
        else
            return false;
    }
    void push(int val)
    {
        if (isFull)
            cout << "Already full";
        else
        {
            top++;
            arr[top] = val;
            cout << "Item added";
        }
    }
    int pop()
    {
        if (isEmpty)
            cout << "Already empty";
        else
        {
            int ptrvalue = arr[top];
            arr[top] = 0;
            top--;
            return ptrvalue;
        }
    }
    int count()
    {
        return (top + 1);
    }
    int peek(int pos)
    {
        if (isEmpty)
        {
            cout << "already empty";
            return 0;
        }
        else
        {
            return arr[pos];
        }
    }
    void change(int pos, int val)
    {
        arr[pos] = val;
        cout << "changed";
    }
    void Display()
    {
        for (int i = 4; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }
};