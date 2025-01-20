#include <iostream>
using namespace std;

struct Item
{
    int data;
    Item *next;
} *head;

Item *display(Item *head)
{
    Item *ptr;          // here we have define anther pointer variable of item data type to terverse the nodes of linkedlist and we not want to update the head node.
    ptr = head;         // if we update the head then list will be destroyed
    while (ptr != NULL) // here ptr contain exactly those values and address which contain head in short ptr is the duplicate of head
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    } /**/
    // cout << head->data << endl;
    // cout << head->next->data << endl;
    // cout << head->next->next->data << endl;

    return head;
}
int main()
{
    struct Item *head;
    struct Item *second;
    struct Item *Third;
    head = new Item();
    second = new Item();
    Third = new Item();

    // now to store data in nodes
    head->data = 2;
    second->data = 3;
    Third->data = 4;
    head->next = second;
    second->next = Third;
    Third->next = NULL;

    display(head);
}
