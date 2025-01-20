#include <iostream>
using namespace std;
int main()
{

    int a = 10;
    int *ptr1;
    ptr1 = &a;

    cout << "the address of A is :" << ptr1 << endl;
    cout << "the value of A store in ptr1 is :" << *ptr1 << endl;

    float b = 12.5;
    float *ptr2;
    ptr2 = &b;
    cout << "the address of b is :" << ptr2 << endl;
    cout << "the value of b store in ptr2 is :" << *ptr2 << endl;

    char ch = 't';
    char *ptr3;
    ptr3 = &ch;
    cout << "the address of character t is :" << ptr3 << endl;
    cout << "the character stored in ptr3 is  :" << *ptr3;
}