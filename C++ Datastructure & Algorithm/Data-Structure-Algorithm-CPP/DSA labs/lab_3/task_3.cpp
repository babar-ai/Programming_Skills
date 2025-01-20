
// adding value at array[0] index by pushing other elements at array[0]...to...array[5]
#include <iostream>
using namespace std;

int main()
{

    int array[6] = {2, 4, 6, 8, 10}; // important note here array[n] n=represent the no of elements we want to store in array NOT THE INDEX ADDRESS.it start from 1 not form 0
    int new_value = 12;              // new value we want to store at array[0] index

    for (int i = 5; i > 0; i--)
    {
        // in this loop we have trancate the location of array[0] by pushing the other elements onword;
        array[i] = array[i - 1];
    }
    array[0] = 12; // here we have assign the new value to 0 index of array.
    for (int j = 0; j < 5; j++)
    {
        cout << array[j] << endl; // printing the update array
    }
}