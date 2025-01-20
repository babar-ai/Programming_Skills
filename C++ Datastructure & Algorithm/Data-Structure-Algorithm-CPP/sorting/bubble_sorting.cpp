
//bubble sorting algorithm
//timecomplexsity=O(N^2)
#include <iostream>
using namespace std;

int main()
{

    int arr[6] = {2, 5, 7, 1, 3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-i-1 ; j++)
        {
            int temp;
            if (arr[j] > arr[j + 1])   //2, 5, 7, 1, 3, 5
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}
