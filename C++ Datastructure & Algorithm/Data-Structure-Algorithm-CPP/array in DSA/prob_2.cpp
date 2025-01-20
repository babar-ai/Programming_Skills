//+++++++++++++++++++++++++++++++++++++++++++++++++
//problem:
//Given an integer x, return true if x is a 
//palindrome and false otherwise.
//+++++++++++++++++++++++++++++++++++++++++++++++++


#include <iostream>
#include <string>
using namespace std;

bool palindrome(int num)
{
    // to convert n into string
    string str = to_string(num);
    int len = str.length();

    for (int i=0;i<len/2;i++)                     //len/2:
                                                //If the length of the string is 3, the loop for (int i = 0; i < length / 2; i++) will perform comparisons for each value of i from 0 to 1 (inclusive). This is because length / 2 is 1.5, but since i is an integer, it will be rounded down to 1. 

    {
        if (len == 2 && (str[i] == str[i + 1]))
        {
            return true;
        }
        if (len == 3 && (str[i] == str[i + 2]))
        {
            return true;
        }
    
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    cout << palindrome(n);
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// conversion integer to string
// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//     int myInteger = 42;
//     string myString = to_string(myInteger);
//     cout << "Integer: " << myInteger << endl;
//     cout << "String: " << myString <<endl;
//     return 0;
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// to find the number of character in string
//  for (char ch : str)
//     {
//         count_char++;
//     }