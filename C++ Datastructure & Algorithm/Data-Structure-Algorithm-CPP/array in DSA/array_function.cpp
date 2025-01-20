#include <iostream>
using namespace std;
//int average(int[], int) //function prototype 

int average(int arr[], int size)
{ // here the int array[] act as a pointer which store the basae
    int sum = 0;
    double ave = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    size = sizeof(arr);
    cout << "the size of the pointer array is " << size << endl;  //this will store the single byte size 
    ave = sum / 5;
    return ave;
}
int main()
{
    double avg;
    int size;
    int array[5] = {1, 2, 3, 4, 5};

    size = sizeof(array);
    cout << "the size of the array is " << size << endl;

    avg = average(array, 5);
    cout << "the aveage is :" << avg << endl;
}

