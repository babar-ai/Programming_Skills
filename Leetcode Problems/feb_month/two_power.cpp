//problem
// Given an integer n, return true if it is a power of two. Otherwise, return false.
// An integer n is a power of two, if there exists an integer x such that n == 2x.

// Example 1:

// Input: n = 1
// Output: true
// Explanation: 20 = 1

//solution

#include <iostream>
#include <cmath>

using namespace std;

bool isPowerOfTwo(int n)
{

    int result;

    for (int i = 0; i >= 0; i++)
    {

        result = pow(2, i);
        if (result == n)
        {
            return true;
            break;
        }
        if (result > n)
        {
            return false;
            break;
        }
    }
}

int main()
{

    int n;
    cout << "enter number:";
    cin >> n;

    int res = isPowerOfTwo(n);
    if (res == 1)
    {
        cout << "ture";
    }
    else
        cout << "false";

    return 0;
}