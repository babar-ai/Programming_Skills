#include <iostream>
using namespace std;

class stack
{

    int array[5];
    int top = -1;

public:
    stack()
    {
        top = -1;
        for (int i = 0; i < 5; i++)
        {
            array[i] = 0;
        }
    }

    void push(int n)
    {
        if (top == 4)
        {
            cout << "stack is full no more space" << endl;
        }
        else
        {
            top++;
            array[top] = n;
            
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "stack is already empty" << endl;
        }
        else
        {
            array[top] = 0;
            top--;
        }
    }
    void readvalues(){
        for(int i=0;i<=4;i++){
            cout<<array[i]<<endl;
        }
    }
};
int main()
{
    stack l1;
    l1.push(1);
    l1.push(2);
    l1.push(3);
    l1.push(4);
    l1.push(5);
    l1.pop();
    l1.readvalues();
    
}