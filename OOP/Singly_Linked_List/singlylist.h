#ifndef SINGLYLIST_H
#define SINGLYLIST_H
#include "node.h"

class SinglyList
{
    public:
        SinglyList();
        SinglyList(Node*);
        void appendNode(Node*);
        void prepend(Node*);
        void insertAfter(int,Node*);
        void deleteNode(int);
        void updateNode(int,int);
        void printList();
        Node* nodeExists(int);
        Node* head;

    protected:

    private:
};

#endif // SINGLYLIST_H
