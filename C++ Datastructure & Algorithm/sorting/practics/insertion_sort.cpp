
#include <iostream>

using namespace std;

void insertion_sort(int arr[], int size)
{

    for (int i = 1; i <= size ; i++)
    {
        int key,j;
        key=arr[i];  //this value will be replace
        j=i-1;
      
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
    insertion_sort(arr, size);
    print(arr,size);

    return 0;
}