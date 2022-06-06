#include "singlylist.h"
#include "node.h"
#include<bits/stdc++.h>
using namespace std;
SinglyList::SinglyList()
{
    head = NULL;
}
SinglyList::SinglyList(Node *n)
{
    head = n;
}
Node* SinglyList::nodeExists(int k)
{
    Node *temp = NULL;

    Node *ptr = head;
    while (ptr != NULL)
    {
      if (ptr->key == k)
      {
        temp = ptr;
      }
      ptr = ptr->next;
    }
    return temp;
}
void SinglyList::appendNode(Node* n)
{
    if (nodeExists(n->key) != NULL)
    {
      cout << "Node Already exists with key value : " << n->key << ". Append another node with different Key value" << endl;
    }
    else
    {
      if (head == NULL)
      {
        head = n;
        cout << "Node Appended" << endl;
      }
      else
      {
        Node *ptr = head;
        while (ptr->next != NULL)
        {
          ptr = ptr->next;
        }
        ptr->next = n;
        cout << "Node Appended" << endl;
      }
    }
}
void SinglyList::prepend(Node* n)
{
    if (nodeExists(n->key) != NULL)
    {
      cout << "Node Already exists with key value : " << n->key << ". Append another node with different Key value" << endl;
    }
    else
    {
      n->next = head;
      head = n;
      cout << "Node Prepended" << endl;
    }
}
void SinglyList::insertAfter(int k,Node* n)
{
    Node *ptr = nodeExists(k);
    if (ptr == NULL)
    {
      cout << "No node exists with key value: " << k << endl;
    }
    else
    {
      if (nodeExists(n->key) != NULL)
      {
        cout << "Node Already exists with key value : " << n->key << ". Append another node with different Key value" << endl;
      }
      else
      {
        n->next = ptr->next;
        ptr->next = n;
        cout << "Node Inserted" << endl;
      }
    }
}
void SinglyList::deleteNode(int k)
{
    if (head == NULL)
    {
      cout << "Singly Linked List already Empty. Cant delete" << endl;
    }
    else if (head != NULL)
    {
      if (head->key == k)
      {
        head = head->next;
        cout << "Node UNLINKED with keys value : " << k << endl;
      }
      else
      {
        Node *temp = NULL;
        Node *prevptr = head;
        Node *currentptr = head->next;
        while (currentptr != NULL)
        {
          if (currentptr->key == k)
          {
            temp = currentptr;
            currentptr = NULL;
          }
          else
          {
            prevptr = prevptr->next;
            currentptr = currentptr->next;
          }
        }
        if (temp != NULL)
        {
          prevptr->next = temp->next;
          cout << "Node UNLINKED with keys value : " << k << endl;
        }
        else
        {
          cout << "Node Doesn't exist with key value : " << k << endl;
        }
      }
    }
}
void SinglyList::updateNode(int k,int d)
{
    Node *ptr = nodeExists(k);
    if (ptr != NULL)
    {
      ptr->data = d;
      cout << "Node Data Updated Successfully" << endl;
    }
    else
    {
      cout << "Node Doesn't exist with key value : " << k << endl;
    }
}
void SinglyList::printList()
{
    if (head == NULL)
    {
      cout << "No Nodes in Singly Linked List";
    }
    else
    {
      cout << endl
           << "Singly Linked List Values : ";
      Node *temp = head;

      while (temp != NULL)
      {
        cout << "(" << temp->key << "," << temp->data << ") --> ";
        temp = temp->next;
      }
    }
}

