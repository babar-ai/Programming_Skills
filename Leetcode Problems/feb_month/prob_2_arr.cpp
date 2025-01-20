// // problem: An integer has sequential digits if and only if each digit in the number is one more than the previous digit.
// // Return a sorted list of all the integers in the range [low, high] inclusive that have sequential digits.

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<char> sequential_int(int low, int high)
{
    vector<char> result;

    for (int i = low; i < high; i++)
    {
        // to convert interger into string
        string str_int = to_string(i);
        bool is_sequential = true;

        // to iterate str_int and compare with onword
        for (int j = 0; j < sizeof(str_int) - 2; j++)
        {

            if ((str_int[j] < str_int[j + 1]) && str_int[j + 1] < str_int[j + 2])
            {

                result.push_back(str_int[j]);
                result.push_back(str_int[j + 1]);
                result.push_back(str_int[j + 2]);
            }
            else
                break;
        }
    }
    return result;
}

int main()
{
    vector<char> result=sequential_int(123, 200);

//range_based loop
    for(char ch : result){
        cout<< ch <<" "<<endl;
    }




}

// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

// vector<int> sequentialDigits(int low, int high) {
//     vector<int> result;

//     // Iterate over the range from low to high
//     for (int i = low; i <= high; ++i) {
//         string num_str = to_string(i);
//         bool is_sequential = true;

//         // Check if digits are sequential
//         for (int j = 1; j < num_str.length(); ++j) {
//             if (num_str[j] != num_str[j - 1] + 1) {
//                 is_sequential = false;
//                 break;
//             }
//         }

//         // If digits are sequential, add the number to the result
//         if (is_sequential) {
//             result.push_back(i);
//         }
//     }

//     return result;
// }

// int main() {
//     int low = 100, high = 300;
//     vector<int> result = sequentialDigits(low, high);

//     // Print the result
//     cout << "Output: [";
//     for (int i = 0; i < result.size(); ++i) {
//         cout << result[i];
//         if (i < result.size() - 1) {
//             cout << ",";
//         }
//     }
//     cout << "]" << endl;

//     return 0;
// }
