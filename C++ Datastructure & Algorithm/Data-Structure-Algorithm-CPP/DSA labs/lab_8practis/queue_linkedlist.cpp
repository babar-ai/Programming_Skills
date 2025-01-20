
//TASK: implement the concept of Queue through Linkedlist.

//insertion will be perform througth tail ptr.
//deletion will be perform througth head or front ptr.
//because of first_in_first_out
//22mdbcs241


#include <iostream>
using namespace std;

class Node
{

public:
    int value;
    Node *next;
    
    Node(int value)
    {
        this->value = value;
        next = NULL;
        
    }
};
class queue
{
    Node *front;  //will point to the same node at start
    Node *tail;

public:
    queue()
    {
        front= NULL;    //initialy bothh nodes will be empty
        tail = NULL;
    }
    void Enqueue(Node *i)    //this funtion will insert a value in queue
    {
        if (front == NULL && tail==NULL)
        {
            front = i;
            tail = i;
        }
        else
        {
            tail->next = i;    //remember there will be no loop in case of simple insertion while queue is empty.
                              //insertion will be made through tail node
            tail = i;
        }
    }

    void Dequeue()               //through dequeue funtion elements can we move or remove on the base of FIFO
    {
        if (front == nullptr)
        {
            cout << "queue si empty" << endl;
        }
        else
        {
            Node *ptr;      // deletion of an node will done through front node or head 
            ptr = front;
            front = ptr->next;
            delete(ptr);
        }
    }
    void print()
    {
        Node *ptr;
        ptr = front;
        while (ptr != NULL)             //remember there will be must while loop in print funtion
        {
            cout << ptr->value << "->";
            ptr = ptr->next;
        }
    }
};

int main()
{
    queue q1;
    cout<<"ENQUEUE"<<endl;
    q1.Enqueue(new Node(1));
    q1.Enqueue(new Node(2));
    q1.Enqueue(new Node(3));
    q1.print();
    cout <<"\nDEQUEUE"<<endl;
    q1.Dequeue();
    q1.print();
}