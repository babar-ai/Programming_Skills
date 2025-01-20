#include <iostream>
using namespace std;

struct linked_list
{
    int value;
    linked_list *next;
} *head; // head is a pointer to a structure of type linked_list. It is used to point to the first node in a linked list.

int creatList(int val)
{
    linked_list *head = new linked_list;
    if (head == NULL)
    {
        head->value = val;
        head->next = NULL;
        return 0;
    }
    for (linked_list *temp = head; head != NULL; temp = temp->next)
    {
    linked_list *LinkEle = new linked_list;
    LinkEle->value = val;
    LinkEle->next = NULL;
    }
}

// void create_List(linked_list *head, int a)
// {
//     // linked_list *head = new linked_list();
//     head = new linked_list();
//     head->value = a;
//     head->next = NULL;
// }
void Printlist()
{

    while (head != NULL)
    {
        cout << head->value << endl;
        head = head->next;
    }
}

int main()
{
    creatList(1);
    creatList(2);
    creatList(3);
    Printlist();
}