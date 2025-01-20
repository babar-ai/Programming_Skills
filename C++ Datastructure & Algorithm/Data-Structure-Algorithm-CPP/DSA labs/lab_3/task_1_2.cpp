// define array globally and storing elements in array through a funtion

#include <iostream>
using namespace std;
const int size = 5; // size of arry
int list[size];     // defining array
int N = 0;
void AddElementAtEnd(int number)
{ // fucntion to add values into array

    if (N < size)
    {
        list[N] = number;
        N++;
    }
    else
        cout << "array has been full no more capascity" << endl;
}
// TASK #02
void showvalues()
{
    for (int i = 0; i < 5; i++)
    {

        cout << list[i] << endl;
    }
}
int main()
{

    AddElementAtEnd(1);
    AddElementAtEnd(2);
    AddElementAtEnd(3);
    AddElementAtEnd(4);
    AddElementAtEnd(5);
    AddElementAtEnd(6);
    AddElementAtEnd(5);
    AddElementAtEnd(6);

    cout << "the elements store in list array are :" << endl;
    showvalues();
}