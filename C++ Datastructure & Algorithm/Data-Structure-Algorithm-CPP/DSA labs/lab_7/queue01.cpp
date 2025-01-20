// LAB # 7 DSA
// TASK 1
// QUEUE IMPLEMENTAION THROUGH ARRAY OF FIXED SIZE
//22MDBCS241
#include <iostream>
using namespace std;

int const N = 5;
int queue[N];
int front = -1;
int Rear = -1;

void enqueu(int i)
{
    if ((front == -1) && (Rear == -1)) // at this point initially the rear=0
    {
        front = 0;
        Rear = 0;
    }
    else if (Rear == N - 1) // condition for full queue
    {
        cout << "The queue is full " << endl;
        return;
    }
    else
    {
        Rear++;
    }
    queue[Rear] = i; // adding element in queue initially it will store value at 0 index then rear will increment
}
void dequeu()
{
    if ((front == -1) && (Rear == -1))
    {
        cout << "queue is empty" << endl;
        return;
    }
    else
    {
     
     queue[front]=front++;
    
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
    enqueu(4);
    print();
    cout << "DEQUEUE ELEMENT" << endl;
    dequeu();
    print();
}