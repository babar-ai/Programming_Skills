#include <iostream>
using namespace std;

void insertion_sort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int j=i-1;
        int key=arr[i];
        
    while (j>=0 && arr[j]>key)
    {
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;
    }
}

int main()
{
    int array[5] = {5, 3, 4, 7, 2};
    int size = sizeof(array) / sizeof(array[0]);

    cout << "Before insertion sorting" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    insertion_sort(array, size);

    cout << "\nAfter insertion sorting" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}

