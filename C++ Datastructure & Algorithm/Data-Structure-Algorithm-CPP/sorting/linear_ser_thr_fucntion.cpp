//program:
//linear searching ...taking array dynamically and finding specific element through liner_search funition.

#include <iostream>
using namespace std;

int linear_Search(int array[], int size, int n)
{
    int i = 0;
    // for (i = 0; i < size; i++)    //both loop are working just understand the concept
    // {
    //     if (array[i] == n)
    //     {
    //         break;                  
    //     }
    // }
    // return (i != size) ? i : -1;
       for (i = 0; i < size; i++)
    {
        if (array[i] == n)
        {
            return i;                 
        }
    }
    return -1;
}

int main()
{
    int no_of_elements;
    int element;
    int i, n;
    cout << "enter the number of elements" << endl;
    cin >> no_of_elements;
    int *array = new int[no_of_elements];
    cout << "enter elements of array" << endl;
    for (i = 0; i < no_of_elements; i++)
    {
        cin >> element;
        array[i] = element;
    }
    int size_of_array = no_of_elements;
    // int size_of_array = sizeof(array) / sizeof(array[i]); in dynamic memory allocation we the size of the array can not be calculted like static array .
    cout << "enter which element do you find ";
    cin >> n;
    int result = linear_Search(array, size_of_array, n);
    if (result != -1)
    {
        cout << "element found located at index " << result << endl;
    }
    else
    {
        cout << "element not found " << endl;
    }
    delete[] array; //valid
    //delete array[]; invalid
}