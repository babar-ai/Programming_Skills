#include <iostream>
using namespace std;

class Node
{

public:
    int value;
    Node *next;
};

void AddElementAtFront(Node *head, int newvalue)
{

    Node *newelement = new Node();
    newelement->value = newvalue;
    newelement->next = head; // to store the address of the head element in the newly added element at the start of the array
    head = newelement;       // updating the head pointer
}

void print_elements(Node *n)
{ // here n=head pointer which keep the address of elements of linkedlist

    while (n != NULL) // triversing of elements of an linkedlist
    {
        cout << n->value << endl;
        n = n->next;
    }
}
int main()
{

    // now i want to declare the elements of linkedlist

    Node *head = new Node(); // new Node(): This is a dynamic memory allocation statement. It creates a new object of type Node on the heap, and the result is a pointer to the newly allocated object. In this
    Node *second = new Node();
    Node *Third = new Node();

    // now how can we link the value of elements of linkedlist
    head->value = 1;
    head->next = second;
    second->value = 2;
    second->next = Third;
    Third->value = 3;
    Third->next = NULL;
    // to add element at fornt of an array head element
    AddElementAtFront(&head, -1);
    AddElementAtFront(&head, -2);
    // print_elements(head);
    print_elements(head);
}