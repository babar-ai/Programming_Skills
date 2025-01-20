#include <iostream>
using namespace std;

int N = 4;
int C = 4;
int *list = new int[N];
int index = 0;
void addElementAtEnd(int newelement)
{

    if (index < N)
    {
        list[index] = newelement;
        index++;
    }
}

void printList()
{
    for (int i = 0; i < N; i++)
    {
        cout << list[i] << endl;
    }
}

void addElementAtStart(int newvalue)
{

    for (int i = N; i > 0; i--) //write shifting 
    {
        list[i] = list[i - 1];
    }
    N++;
    list[0] = newvalue;
}
void addElementAtIndexJ(int ind, int newvalue)
{ // function no 4

    for (int i = N; i > ind; i--)
    {
        list[i] = list[i - 1];
    }
    N++;
    list[ind] = newvalue;
}

void DeleteElementFromStart()
{

    for (int i = 0; i < N; i++)

    {
        list[i] = list[i + 1];
    }
    N = N - 1;
}

void DeleteElementFromEnd()
{
    N = N - 1;
}
void DeleteElementAtIndexJ(int ind)
{ // function no 4

    for (int i = ind; i < N; i++)
    {
        list[i] = list[i + 1];
    }
    N--;
}

void SearchElement(int indexe)
{

    for (int i = 0; i <= index; i++)
    {
        if (list[i] == indexe)
        {
            cout << "Element Found !" << endl
                 << indexe << " is located at index " << i << endl;
            break;
        }
    }
}
void AddElementAfterValue(int value, int newElement)
{
    int temp;
    N = N + 1;
    for (int i = 0; i < N; i++)
    {
        if (list[i] == value)
        {
            // temp =
            list[N+1];
            for (size_t j = N-1; j > i; j--) 
            {
                list[j] = list[j-1];
            }
            list[i+1] = newElement;
            
            break;
        }
    }
   
}

void increaseArraySize()
{
    N = N + C;
    int *temp = new int[N];

    for (int i = 0; i < N; i++)
    {

        temp[i] = list[i];
    }
    delete[] list;
    list = temp;

    cout << "\nIncreased dynamic array size from " << (N - C) << " to " << N << endl;
}
int main()
{
    addElementAtEnd(2);
    addElementAtEnd(4);
    addElementAtEnd(6);
    addElementAtEnd(8);
    addElementAtEnd(9);
    cout << "adding values in array" << endl;
    printList();
    cout << "adding value at start i.e at list[0] " << endl;
    addElementAtStart(1);
    printList();
    cout << "adding value at indexJ" << endl;
    addElementAtIndexJ(2, 5);
    printList();
    cout << "Deleting value at start" << endl;
    DeleteElementFromStart();
    printList();
    cout << "Deleting value at End" << endl;
    DeleteElementFromEnd();
    printList();
    cout << "Deleting value at jth index" << endl;
    DeleteElementAtIndexJ(3);
    printList();
    // cout<<"increasing array size :"<<endl;
    // increaseArraySize();
    //  cout<<"search element int array"<<endl;
    //  SearchElement(4);
    cout << "Adding Element after value" << endl;
    AddElementAfterValue(5, 6);
    printList();
}
