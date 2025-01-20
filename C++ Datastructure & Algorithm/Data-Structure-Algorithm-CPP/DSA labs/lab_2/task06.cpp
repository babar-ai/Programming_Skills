#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "How many Students" << endl;
    cin >> n;
    int *grades = new int[n];
    for (int i = 0; i < n; i++)
    {

        cout << "enter the student grade " << (i + 1) << "? :"<<endl;
        int mark;
        cin >> mark;
        grades[i] = mark;
    }
}