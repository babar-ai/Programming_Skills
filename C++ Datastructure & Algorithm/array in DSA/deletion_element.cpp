#include <iostream>

// Function to delete an element from an array
void deleteElement(int arr[], int size, int indexToDelete) {
    if (indexToDelete < 0 || indexToDelete >= size) {
        std::cout << "Invalid index to delete!" << std::endl;
        return;
    }

    // Shift elements to the left starting from the index to delete
    for (int i = indexToDelete; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }

    // Decrease the size of the array by one
    size = size - 1;

    // Print the updated array
    std::cout << "Updated array after deleting element at index " << indexToDelete << ":" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int indexToDelete = 2; // Index of the element to delete
    deleteElement(arr, size, indexToDelete);

    return 0;
}
