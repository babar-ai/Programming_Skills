#include <iostream>
using namespace std;

class Node
{

public:
    int value;
    Node *next;

    Node(int n)
    {
        this->value = n;
        next = NULL;
    }
};
class linkedlist
{
    Node *head;

public:
    linkedlist()
    {
        head = NULL;
    }

    void insertAtBeginning(Node *new_node)
    {
        if (head == NULL)
        {
            head = new_node;
        }
        else
        {
            new_node->next = head;
            head = new_node;
        }
    }

    void InsertionAtEnd(Node *i)
    {
        if (head == NULL)
        {
            head == i;
        }
        else{

        Node *ptr;
        ptr = head;
        while (ptr->next!= NULL)
        {
           ptr=ptr->next ;
        }
        ptr->next=i;
    }
        }

    void print()
    {
        Node *ptr;
        ptr = head;
        while (ptr != NULL)
        {
            cout << ptr->value << endl;
            ptr = ptr->next; // here simple update the ptr
        }
        
    }
};

int main()
{
    linkedlist l1;
    l1.insertAtBeginning(new Node(21));
    l1.insertAtBeginning(new Node(22));
    l1.InsertionAtEnd(new Node(20));
    l1.InsertionAtEnd(new Node(19));
    l1.print();
    
}

//   if (head == NULL)
//         {
//             head = i;
//         }
//         else
//         {
//             Node *ptr = head;

//             while (ptr->next != NULL)
//                 ptr = ptr->next;

//             ptr->next = i;
//         }