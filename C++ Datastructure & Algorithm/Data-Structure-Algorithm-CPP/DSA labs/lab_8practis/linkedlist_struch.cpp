// here is how to create a simple node
#include <iostream>
using namespace std;

// creation of simple node through node class
class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
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
    void insertion(Node *j)
    {

        if (head == NULL)
        {
            head = j;
        }
        else
        { // condition for simple adding a node in linkedlist
            Node *ptr;
            ptr = head;
            while (ptr->next != NULL)
                ptr = ptr->next;      //ptr->next=head 
                                      //head->next=j
                ptr->next = j;
        }
    }

    void insertionatbegnning(Node *i) // this funtion will work like a queue
    {
        if (head == NULL)
        {
            head = i;
        }
        else
        {
            i->next = head; // i is new element
            head = i;
        }
    }
    void insertionAtTheEnd(Node *k)
    {
        if (head == NULL)
        {
            head == k;
        }
        else
        {
            Node *ptr;
            ptr = head;
            while (ptr->next != NULL)
            {
                // ptr->next = ptr;
                ptr = ptr->next;
            }
                ptr->next = k;
        }
    }
    void print()
    {
        Node *ptr;
        ptr = head;
        while (ptr != NULL)
        {
            cout << ptr->value << "->";
            ptr = ptr->next;
        }
        cout << endl;
    }
};

int main()
{
    // Node *N1 = new Node(30); // here you must have to create a pointer object becauese of its data type
    linkedlist l1;

    cout << "Adding Nodes in linkedlist " << endl;
    l1.insertion(new Node(15));
    l1.insertion(new Node(16));
    l1.insertion(new Node(17));
    l1.insertion(new Node(18));
    l1.print();
     cout << "insertion at the begnning" << endl;
     l1.insertionatbegnning(new Node(14));
    l1.print();
    // cout << "insertion at the End" << endl;
    // l1.insertionAtTheEnd(new Node(18));
    // l1.print();


    // l1.insertionatbegnning(new Node(20));
}