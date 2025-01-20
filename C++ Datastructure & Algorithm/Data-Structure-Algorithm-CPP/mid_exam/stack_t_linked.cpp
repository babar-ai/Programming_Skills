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
        this->next = NULL;
    }
};

class Stack
{

public:
    Node *top;

    Stack()
    {
        top = NULL;
    }

    void Push(Node *i)
    {
        if (top == NULL)
        {
            top = i;
        }
        else
        {

            i->next = top;
            top = i;
        }
    }
    void Pop(){
        if(top==NULL){
            cout<<"stack is empty"<<endl;
        }
        else{
            Node *ptr;
            ptr=top;
            top=top->next;
            delete ptr;
        }
    }

void print(){
    Node *ptr;
    ptr=top;
    while (ptr!=NULL)
    {
        cout<<ptr->value<<endl;
        ptr=ptr->next;
    }
    
}
};

int main()
{
    Stack l1;
    l1.Push(new Node(5));
    l1.Push(new Node(6));
    l1.Push(new Node(7));
    l1.Push(new Node(8));
    l1.print();
    cout<<"++++++++++++"<<endl;
    l1.Pop();
    l1.print();
}