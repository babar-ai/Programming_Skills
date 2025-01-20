#include <iostream>
using namespace std;

class stack
{
private:
    int top; // with the help of top pointer we will insert or delete element inside of stack
    int array[5];

public:
    stack()
    {
        top = -1;
        for (int i = 0; i < 5; i++)
        {
            array[i] = 0;
        }
    }
    // Now lets Create funtion for insertion and deletion i.e push and pop
    void push(int num)
    { // insertion

        if (top == 4)
        {
            cout << "stack overflow" << endl;
        }
        else
        {
            top++;
            array[top] = num;
        }
    }
    int Pop()
    { // deletion

        if (top == -1)
        {
            cout << "stack is empty i.e in underflow condition " << endl;
        }
        else
        {
            int popvalue = array[top];
            array[top] = 0; // deletion of top element from stack
            top--;
            return popvalue;
        }
    }
    void display()
    {
        if (top == -1)
        {
            cout << "stack is empty i.e in underflow condition " << endl;
        }
        else
        {
            for (int i = 4; i >= 0; i--)
            {
                cout << array[i] << endl;
            }
        }
    }
};

int main()
{
    stack s1;
    s1.display();
    s1.push(2);
    s1.push(3);
    s1.display();
}