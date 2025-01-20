#include <iostream>
using namespace std;

int main()
{
    int n;
    int i=0;
    int array[5] = {4, 5, 3, 2, 4};
    
    cout << "enter which element you want to find" << endl;
    cin >> n;
    for (i = 0; i < 5; i++)
    {
        if (array[i] == n) //here you must have to notice "=="
        {
            cout << "element " << n << " found located at index " << i << endl;
            break;
        }
    }
    if (i == 5)
    {
        cout << "element not found " << endl;
    }
}


