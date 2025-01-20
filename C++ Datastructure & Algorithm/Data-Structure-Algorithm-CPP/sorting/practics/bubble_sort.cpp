#include <iostream>

using namespace std;

void bubble_sort(int arr[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        
        for (int j = 0; j < size - i - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                int temp;
                 temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] =temp;
            }
        }
    }
}
int print(int arry[],int size){
    for(int i=0;i<size;i++){
        cout<<arry[i]<<" ";
    }
}

int main()
{

    int arr[] = {8, 5, 6, 4, 3, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    print(arr,size);
    cout<<endl;
    bubble_sort(arr, size);
    print(arr,size);

    return 0;
}