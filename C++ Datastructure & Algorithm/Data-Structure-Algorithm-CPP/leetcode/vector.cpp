#include <iostream>
#include <vector>
using namespace std;

int print(vector<int> &arry)
{

    for (int i = 0; i < arry.size(); i++)
    {
        cout << arry[i] << " ";
    }
    cout << endl;
}

int main()
{

    vector<int> arry;
    int element, size;
    cout << "enter the size";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "enter elements ";
        cin >> element;
        arry.push_back(element);
    }
    print(arry);

    return 0;
}