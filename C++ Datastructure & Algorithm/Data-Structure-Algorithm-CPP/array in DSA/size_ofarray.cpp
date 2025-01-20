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
    size=sizeof(array);
    //size= sizeof(array)/sizeof(array[0]); //calculate the number of elements in array
    cout<<"\n size of array is "<<size;
}