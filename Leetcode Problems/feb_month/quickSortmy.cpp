#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int p = low - 1;

//loop
    for(int j = low+1; j <= high; ++j ){

        
    }




}

int main()
{

    vector<int> arr = {2, 1, 5, 4, 3};
    int size = arr.size();
    partition(arr,0,size-1);
    return 0;
}