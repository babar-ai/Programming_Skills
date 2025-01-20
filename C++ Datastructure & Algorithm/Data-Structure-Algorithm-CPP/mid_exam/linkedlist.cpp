#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *Next;

    Node(int value)
    {
        this->value = value;
        this->Next = NULL;
    }
};
class Linkedlist
{
    Node *head;

public:
    Linkedlist()
    {
        head = NULL;
    }
    void insertion(Node *i)
    {
        if (head == NULL)
        {
            head = i; // the address of the new element will be store in head pointer
        }
        else
        {

            Node *ptr;
            ptr = head;
            while (ptr->Next != NULL)
            {
                ptr = ptr->Next;
            }
            ptr->Next = i; // here element is not a value but an address of the new element
        }
    }

    void insertionAtbegning(Node *j)
    {
       // Node *head;        misstake head is already declared in linkedlist class 
        if (head == NULL)
        {
            head = j;
        }
        else
        {
            j->Next = head;
            head = j;
        }
    }

    void print()
    {
        Node *ptr;
        ptr = head;
        while (ptr != NULL)
        {
            cout << ptr->value << endl;
            ptr = ptr->Next;
        }
    }
};

int main()
{
    Linkedlist l1;
    l1.insertion(new Node(12));
    l1.insertion(new Node(13));
    l1.insertion(new Node(14));
    l1.print();
    cout << endl;
    l1.insertionAtbegning(new Node(11));
    l1.print();
}