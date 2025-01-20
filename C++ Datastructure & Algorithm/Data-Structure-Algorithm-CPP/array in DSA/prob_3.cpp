#include <iostream>
#include <string>
#include <map>

using namespace std;

int romanToInt(string s)
{

    // to create a map
    int sum=0;
    map<char, int> roman{   //MAP TABLE WHICH STORE PAIR DATA ASSOCIATIVE CONTAINER

        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000},
    };
     //sum = roman[s[0]];

    for (int i = 0; i < s.length(); i++)
    {

        if (roman[s[i]] < roman[s[i + 1]])  //RULE: read from left to right and larger to smaller
        { // IV
            sum += roman[s[i + 1]] - roman[s[i]]; //if the sequence is occure where the smaller occure first then subtrict it from larger roman integer
            i++;
        }
        else
        {
            sum += roman[s[i]];
        }
    }
    return sum;
}

int main()
{ //good

    string s1 = "VIX";
    cout << romanToInt(s1);

    return 0;
}

// class Solution
// {
//     int change(char ch)
//     {
//         switch (ch)
//         {
//         case 'I':
//             return 1;
//             break;
//         case 'V':
//             return 5;
//             break;
//         case 'X':
//             return 10;
//             break;
//         case 'L':
//             return 50;
//             break;
//         case 'C':
//             return 100;
//             break;
//         case 'D':
//             return 500;
//             break;
//         case 'M':
//             return 1000;
//             break;

//         default:
//             break;
//         }
//     }

// public:
//     int romanToInt(string s)
//     {
//         int ans = change(s[0]);

//         for (int i = 1; i < s.length(); i++)
//         {
//             ans += change(s[i]);

//             if (change(s[i]) > change(s[i - 1]))
//                 ans -= (2 * change(s[i - 1]));
//         }

//         return ans;
// }
// };
// int main(){

//     string s1="IV";
//      romanToInt(s1);
// }