#include <iostream>
using namespace std;
#define N 5

int Queue[N];
int front = -1;
int rear = -1;

void Enqueue(int i)
{

    if ((front == -1) && (rear == -1))
    {
        front = 0;
        rear = 0;
    }
    // else if (rear = N - 1)
    // {
    //     cout << "queue is overload" << endl;
    //     return;
    // }
    else
    {
        rear++;
    }
    Queue[rear] = i;
}

void Dequeue()
{
    if ((front == -1) && (rear == -1))
    {
        cout << "queue is underflow ie empty" << endl;
    }
    else
    {
        Queue[front]=front++;
        
    }
}
    void print()
    {
        for (int i = 0; i <= rear; i++)
        {
            cout << Queue[i] << endl;
        }
    }

int main()
{
    Enqueue(1);
    Enqueue(2);
    Enqueue(3);
    print();
    cout<<"+++++++++++++++"<<endl;
    Dequeue();
    print();    


}