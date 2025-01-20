#include <iostream>
using namespace std;

//step#01 

class Node        //this class contain data all about node
{
public:
    int value;
    Node *next;

    Node(int value)          //constructor for storing values and address in node
    {
        this->value = value;
        next = NULL;
    }
};
 
 //step#02

class LinkedList       //this class contain data all about linkedlist nodes
{

    Node *head;
public:
    LinkedList()
    {
        head = NULL;
    }

//step#03

    void insert(Node *new_node)   //here we are allocating dynamic space to node in memory
                                 // Node *new_value= new Node(new_value); remember this 
    {
        if (head == NULL)
        { 
            head = new_node;   //here consider i is a new node 
        }                      //i have replace the i=new_node
        else
        {                            //here in cases of adding nodes we doest requied any pointer but when we are printing then an extra pointer must be required
            new_node->next = head;   
            head = new_node; //here head is updated
        }
    }
    void print(){

       Node *ptr;
       ptr=head;
       while(ptr!=NULL){
        cout<<ptr->value<<"->"<<"";
        ptr=ptr->next;
       }
       cout<<"Null";
    }
};


int main()
{
    LinkedList ll;
    ll.insert(new Node(44));
    ll.insert(new Node(45));
    ll.print();

}
