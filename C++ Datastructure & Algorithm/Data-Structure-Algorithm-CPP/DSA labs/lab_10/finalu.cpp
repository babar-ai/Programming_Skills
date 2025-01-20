//sorting 
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void generate_data(int* arry, int size) {
    for (int i = 0; i < size; i++) {
        arry[i] = rand() % 2000;
    }
}

void print_data(int* arry, int size) {
    for (int i = 0; i < size; i++) {
        cout << "\t" << arry[i];
    }
}

void bubble_sort(int* arry, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (arry[j] > arry[j + 1]) {
                int temp = arry[j];
                arry[j] = arry[j + 1];
                arry[j + 1] = temp;
            }
        }
    }
}

void insertion_sort(int* arry, int size) {
    for (int i = 1; i < size; i++) {
        int temp = arry[i];
        int j = i;
        while (j > 0 && arry[j - 1] > temp) {
            arry[j] = arry[j - 1];
            j--;
        }
        arry[j] = temp;
    }
}

void selection_sort(int* arry, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arry[j] < arry[i]) {
                int temp = arry[j];
                arry[j] = arry[i];
                arry[i] = temp;
            }
        }
    }
}

int main() {
    int size;
    cout << "enter number of integer to genrate "<<endl;
    cin >> size;

    int* arry = new int[size];
    generate_data(arry, size);

    cout << "Before Sorting ...." << endl;
    print_data(arry, size);

    cout << "\nselect one of the sorting algorithm";
    cout << "\nBubble sort: 1";
    cout << "\nInsertion sort: 2";
    cout << "\nSelection sort: 3";
    cout << "\n\nselection: ";
    
    int select;
    cin >> select;

    switch (select) {
        case 1:
            bubble_sort(arry, size);
            break;
        case 2:
            insertion_sort(arry, size);
            break;
        case 3:
            selection_sort(arry, size);
            break;
        default:
            cout << "wrong selection" << endl;
            break;
    }

    cout << "\nAfter Sorting ...." << endl;
    print_data(arry, size);

    delete[] arry; // Free the allocated memory
    return 0;
}
