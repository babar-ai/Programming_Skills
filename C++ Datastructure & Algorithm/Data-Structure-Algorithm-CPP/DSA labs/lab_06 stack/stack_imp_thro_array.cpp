//stack implementation through array 
#include <iostream>
using namespace std;
#define N 5

int stack[N];
int top = -1;


void Push(int n)
{
    if (top == -1)
    {
        top++;
        stack[top] = n;
    }
    else
    {
        top++;
        stack[top]=n;
    }
}
void Pop()
{
    if (top == -1)
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        
        top--; 

    }
}
    void print()
    {
        for (int i = 0; i <= top; i++)
        {
            cout << stack[i] << endl;
        }
    }


int main()
{
    Push(1);
    Push(3);
    Push(4);
    Push(5);
    print();
    cout<<endl;
    Pop();
    print();
    

}
