#include <iostream>
using namespace std;

// adding value at the begnning of an array

int main()
{
    int capacity = 100;
    int size = 6;
    int arr[100] = {1, 2, 3, 4, 5};

    // here i want to add value at index arr[0]
    int element = 6;
    for (int i = 5; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = element;

    // to traverse
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    
}
