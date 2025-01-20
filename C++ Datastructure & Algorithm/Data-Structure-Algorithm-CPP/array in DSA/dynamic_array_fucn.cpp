#include <iostream>
using namespace std;
// int average(int[], int) //function prototype

int average(int arr[], int size)
{ // here the int array[] act as a pointer which store the basae
    int sum = 0;
    double ave = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    size = sizeof(arr);
    cout << "the size of the pointer array is " << size << endl; // this will store the single byte size
    ave = sum / 5;
    return ave;
}
int main()
{
    double avg;
    int n;
    int *array = new int(n);
    cout << "enter the size of the array" << endl;
    cin >> n;
    cout << "enter the element" << n << "of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    avg = average(array, n);
    cout << "the aveage is :" << avg << endl;
}
