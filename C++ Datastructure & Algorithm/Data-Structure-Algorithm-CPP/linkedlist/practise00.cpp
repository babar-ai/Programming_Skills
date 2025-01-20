#include <iostream>
using namespace std;

class node
{
public:
    int value;
    node *next;

    node(int N)
    {
        value = N;
        next = NULL;
    }
};
class linkedlist
{
public:
   
    node *head;

linkedlist(){
    head=NULL;
}
    void insertelement(node *i)
    {
        if (head == NULL)
        {
            head = i;
        }
        else
        {
            node *ptr;
            ptr=head;
            while(ptr->next!=NULL){
                ptr=ptr->next;
                
            }
                ptr->next=i;
        }
    }
    void print(){
        node *ptr;
        ptr=head;
        while (ptr!=NULL)
        {
            cout<<ptr->value<<"->";
            ptr=ptr->next;
        }
        cout<<endl;

    }
};

int main()
{
    linkedlist l1;
    l1.insertelement(new node(2));
    l1.insertelement(new node(3));
    l1.insertelement(new node(4));
    l1.print();



}