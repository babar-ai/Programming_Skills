#include <iostream>
using namespace std;

int Selection_sort(int arr[], int size)
{

    for (int i = 0; i < size-1; i++)
    {
        int min = i;
        for (int j = i+1; j < size; j++) //j=i+1=1 this loop start from 1 because we have to make comparision b/w element at index 0 and 1
        {
            if (arr[j] < arr[min])
            {
                min=j;
            }
        }
        if(min!=i){    //mint variable will be updated only if comparion become true 

            int temp;
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }

    }
}

int main()
{

    int array[5] = {5, 3, 4, 7, 2};
    int size = sizeof(array) / sizeof(array[0]);
    cout << "Before selection sorting" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    Selection_sort(array, size);
    cout << "after selection sorting" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}
