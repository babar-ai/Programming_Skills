#include <iostream>
using namespace std;
void fuc(int *a, int *b)
{

    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 10;
    int b = 20;

    fuc(&a, &b);
    cout << "a=" << a << endl;
    cout << "b=" << b;
}