// program to find the power of the given number recursivly
#include <iostream>
using namespace std;

// recursive function
//  int power(int N, int P)
//  {

//     if (P == 0)
//         return 1;

//     int pre_power = power(N, P - 1); // when p=0 it will return 1 to this funtion then this will multiply with power(4,1)=4*1=4
//     return N * pre_power;            //see also notes example
// }

int sum(int n)
{
    if (n == 0)
        return 0;

    int prev_sum = sum(n - 1);
    return n + prev_sum;
}

int factorial(int n)
{
    if(n==0)                         
    return 1;
    int pre_fac=factorial(n-1);
    return n*pre_fac;
}
int main()
{
    // int N, p;
    // cout << "enter a number and its power to calculate" << endl;
    // cin >> N;
    // cout << "enter power:";
    // cin >> p;
    // cout << power(N, p);

    //cout << sum(5);
    cout<<factorial(5);
    return 0;
}