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
class stack
{
    Node *top;

public:
    stack()
    {
        top = NULL;
    }

    void push(Node *i)
    {
        if (top == NULL)
        {
            top = i;
        }
        else
        {
            // while (top->next != NULL) //loop will be not used in case of stack as each last element will be treated as begnning element
            //     top = top->next;
            // }
            //     top->next = i;
            //     top = i;
            // {
            i->next = top; // here in case of stack linkedlist the last element we want to add will be treated as a begnning element
            top = i;
        }
    }
    void pop()
    {
        if (top == NULL)
        {
            cout << "stack is empty" << endl;
        }
        else
        {
            Node *ptr;
            ptr = top;
            top = top->next;
            delete ptr;
        }
    }
    void deleteElementAtEnd()
    {
        Node *ptr;
        Node *q;
        ptr = top;
        q = top;
        while (ptr->next != NULL)
        {
            ptr->next = ptr;
            ptr = ptr->next;
            while (q->next != NULL)
            {
                q->next = NULL;
            }
        }
        q = NULL;
        delete (q);
    }

    void print()
    {
        Node *ptr;
        ptr = top;
        while (ptr != NULL)
        {
            cout << ptr->value <<endl;
            ptr = ptr->next;
        }
    }
};

int main()
{
    stack s1;
    s1.push(new Node(2));
    s1.push(new Node(3));
    s1.push(new Node(4));
    s1.push(new Node(5));
    s1.print();
    cout << endl;
    s1.pop();
    s1.pop();
    s1.print();

    // cout << endl;
    // s1.deleteElementAtEnd();
    // s1.print();
}