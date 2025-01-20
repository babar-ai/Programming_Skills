#include <iostream>
using namespace std;

void swap(int &c, int &d)
{

    int temp = c;
    c = d;
    d = temp;
}

int main()
{

    int x = 2;
    int y = 4;

    int &c = x;
    int &d = y;

    swap(c, d);

    cout << "the value of x after swaping is " << x << endl;
    cout << "the value of y after swaping is " << y << endl;
}