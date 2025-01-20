// to delete the first element from list
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

    void insert(Node *new_node)
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
    void AddelementAtStart(Node *n){
          Node* ptr;
          ptr=head;
          if(head==NULL){
            head=n;
          }
          else{
               while (ptr->next!=NULL)
               {
                 ptr=ptr->next;
                 n->next=NULL;
               }
               
                
          }
    }
};

int main()
{
    // working like a stack FIFO
    linkedlist l1;
    l1.insert(new Node(21));
    l1.insert(new Node(22));
    l1.insert(new Node(23));
    l1.print();
}
