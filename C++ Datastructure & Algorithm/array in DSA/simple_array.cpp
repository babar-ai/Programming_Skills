#include <iostream>
using namespace std;

int main()
{

    // simple array initialization and declaration
    int array[5] = {2, 3, 7, 3, 2};
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << "\t";

    }
    int size;
    size= sizeof(array)/sizeof(array[0]);
    cout<<"size of array is "<<size;
}

//     cout << "Enter size of array" << endl;
//     int size;
//     int element;
//     cin >> size;
//     int array[size];

//     cout << "Enter  elements of array" << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cin >> element;
//         array[i] = element;
//     }

//     // to print elements//Traversing 

//     cout << "elements of the array"
//          << "\t";
//     for (int i = 0; i < size; i++)
//     {

//         cout << array[i] << "\t";
//     }
// }