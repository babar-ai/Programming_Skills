#include <iostream>
using namespace std;
void array_sum(int arr[], int num)
{

    int sum = 0;
    for (int i = 0; i < num; i++)
    {
        sum += arr[i];
    }
    cout << "THE SUM OF THE ARRAY ELEMENT IS :" << sum << endl;
}

int main()
{

    int array[5] = {1, 2, 3, 4, 5};
    array_sum(array, 5);
}