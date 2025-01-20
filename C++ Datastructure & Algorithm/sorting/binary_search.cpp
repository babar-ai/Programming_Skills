#include <iostream>
using namespace std;

int Binary_Search(int arry[], int size, int element)
{
    // Initialize low and high indices for the search range
    int low = 0;
    int high = size - 1;
    int mid;  // Declare a variable to store the middle index

    // Continue searching until the low index is less than or equal to the high index
    while (low <= high)
    {
        // Calculate the middle index of the current search range
        mid = (low + high) / 2;  //here the value will cellup

        // If the element is found at the middle index, return the index
        if (arry[mid] == element)
        {
            return mid;
        }
        // If the element is greater than the value at the middle index
        else if (arry[mid] < element)
        {
            // Update the low index to search in the upper half of the current range
            //here +1 means assigning index of element just loacated after the mid index it is because we have searched element till mid index 
            low = mid + 1;
        }
        // If the element is less than the value at the middle index
        else
        {
            // Update the high index to search in the lower half of the current range
            high = mid - 1;
        }
    }

    // If the element is not found after the while loop, return -1 indicating element not found
    return -1;
}


int main()
{

    int element;
    int array[6] = {22, 33, 34, 55, 66, 77};
    int size = sizeof(array) / sizeof(array[0]);
    cout << "enter element which you want to find ";
    cin >> element;

    int result = Binary_Search(array, size, element);
    if (result != -1)
        cout << "the element " << element << " located at index " << result << endl;
    else
        cout << "the element not found";
}