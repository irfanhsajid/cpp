#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *head;
void InsertAtFirst(int item)
{
    node *temp = new node();
    temp->data = item;
    temp->next = NULL;
    if (head != NULL)
    {
        temp->next = head;
    }
    head = temp;
}
void Print()
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void InsertAtLast(int item)
{
    node *temp = new node();
    temp->data = item;
    temp->next = NULL;
    node *index = head;
    while (index->next != NULL)
    {
        index = index->next;
    }
    index->next = temp;
}
int main()
{
    head = NULL;
    InsertAtFirst(6);
    InsertAtFirst(7);
    InsertAtFirst(8);
    InsertAtFirst(9);
    InsertAtLast(11);
    Print();
    return 0;
}
