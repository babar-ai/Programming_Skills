// question:
//  Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

// Symbol       Value
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000
// For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

// Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

// I can be placed before V (5) and X (10) to make 4 and 9.
// X can be placed before L (50) and C (100) to make 40 and 90.
// C can be placed before D (500) and M (1000) to make 400 and 900.

// solution:

#include <iostream>
#include <string>
#include <map>

using namespace std;

int Roman_to_int(string roman){

     int sum = 0;
    // map
    map<char, int> mymap;
    mymap.insert({{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}});

    // length of the roman string
    int len = roman.length();

    for (int i = 0; i < len; i++)
    {

        if (i < len - 1 &&  mymap[roman[i]] < mymap[roman[i + 1]])
        {

            sum += mymap[roman[i + 1]] - mymap[roman[i]];
            i++;  // Skip the next character since it's already processed
        }
        else
            sum += mymap[roman[i]];
    }

    cout << "the sum of the given roman is :" << sum;



}

int main()
{
    // To take input from user
    string roman;
    cout << "enter roman number:";
    cin >> roman;
  
    //to calculate sum of the roman in integer
    Roman_to_int(roman);

    return 0;
}