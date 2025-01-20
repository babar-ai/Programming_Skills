//stack implemention through structure

#include <iostream>
using namespace std;

struct Stack
{
    int data;
    struct Stack *next;
};
Stack *top = NULL;

void Push(int newElement)
{
    Stack *n = new Stack();
    if (n == NULL)
    {
        cout << "Stack is Full";
    }
    else
    {
        n->data = newElement;
        n->next = top;
        top = n;
    }
}

void Pop()
{
    if (top == NULL)
    {
        cout << "Stack Underflow";
    }
    else
    {
        Stack *p = top;
        top = top->next;
        delete p;
    }
}
void Read()
{
    Stack *read = top;
    if (read == NULL)
    {
        cout << "Stack is Empty" << endl;
    }
    cout << "Stack have values: ";

    while (read != NULL)
    {
        cout << " " << read->data;
        read = read->next;
    }
}
int main()
{
    Push(1);
    Push(2);
    Push(3);
    Read();
    cout << "\nAfter Pop Values\n";
    Pop();
    Pop();
    Read();
}
