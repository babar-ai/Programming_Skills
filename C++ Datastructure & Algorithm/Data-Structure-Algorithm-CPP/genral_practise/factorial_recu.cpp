#include <iostream>
using namespace std;

// // Function to calculate the factorial of a number using a loop
// int factorial(int n) {
//     int fact = 1;

//     // Loop to multiply numbers from 1 to n
//     for (int i = 1; i <= n; ++i) {
//         fact = fact * i; // Multiply the current number with the accumulated factorial
//     }

//     return fact;
//        }
//FINDING FACTORIAL THROUHT RECURSION
int facto(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int a = 1;
    int postfact = facto(n - 1);
    return n * postfact;
}
// Return the calculated factorial

int main()
{
    int n;

    // Get input from the user
    cout << "Enter a number: ";
    cin >> n;

    // Call the factorial function and display the result
    // cout << "Factorial of " << n << " is: " << factorial(n);
    cout << "Factorial of a " << n << " is: " << facto(5);

    return 0;
}
