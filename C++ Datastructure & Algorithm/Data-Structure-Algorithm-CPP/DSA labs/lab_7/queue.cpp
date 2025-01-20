// LAB # 7 DSA
// TASK 1
// QUEUE IMPLEMENTAION THROUGH ARRAY OF FIXED SIZE

#include <iostream>
using namespace std;

int const N = 5;
int queue[N];
int front = -1;
int Rear = -1;

void enqueu(int i)
{
    if ((front == -1) || (Rear == -1)) // at this point initially the rear=0
    {
        front = i;
        Rear = i;
        
        cout<<"hello front"<<endl;
    }
    else
    {
        cout<<"hello if"<<endl;
        Rear++;
        queue[Rear] = i;
    }
}
void dequeu()
{
    if ((front == -1) || (Rear == -1))
    {
        cout << "queue is empty" << endl;
        return;
    }
    else
    {
        front=front++;

    }
}

void print()
{
    for (int i = 0; i <= Rear; i++)
    {
        cout << queue[i] << "->";
    }
    cout << endl;
}
int main()
{
    cout << "INQUEUE ELEMENT" << endl;
    enqueu(2);
    enqueu(3);
    
    print();
    // dequeu();
    // print();
    // cout << "DEQUEUE ELEMENT" << endl;
    // dequeu();
    // dequeu();
    // print();
}