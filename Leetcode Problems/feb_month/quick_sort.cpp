// 1. What Is a Quick Sort Algorithm?
// Quick sort is a widely used and efficient sorting algorithm that employs a divide-and-conquer approach to sort an array or list of elements. The basic idea behind quick sort is to select a 'pivot' element from the array and partition the elements into two sub-arrays:

// one incorporating elements less than the pivot
// the other containing elements greater than the pivot.

#include <iostream>
#include <vector>

// Function to partition the array and return the pivot index
int partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[low]; // Choosing the first element as the pivot
    int i = low + 1; // Index of the smaller element

    for (int j = low + 1; j <= high; ++j) {
        // If current element is smaller than or equal to pivot
        if (arr[j] <= pivot) {
            // Swap arr[i] and arr[j]
            std::swap(arr[i], arr[j]);
            ++i;
        }
    }
    // Swap arr[low] and arr[i - 1] (or pivot)
    std::swap(arr[low], arr[i - 1]);
    return i - 1;
}

// Quicksort algorithm
void quickSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        // Partitioning index
        int pi = partition(arr, low, high);

        // Recursive calls to sort the partitions
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Utility function to print the array
void printArray(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> arr = {12, 7, 11, 5, 6, 13};
    int n = arr.size();

    std::cout << "Original array: ";
    printArray(arr);

    quickSort(arr, 0, n - 1);

    std::cout << "Sorted array: ";
    printArray(arr);

    return 0;
}
