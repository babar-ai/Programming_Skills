

//range-based for loop in C++
 //This loop iterates over each element in the collection nums (which can be an array, a std::vector, or any other container that supports iteration) and assigns the current element to the variable x for each iteration.
// for (int x : nums){

// }
//Problem

// Given an integer array nums, return the length of the longest strictly increasing 
// subsequence
// .

 

// Example 1:

// Input: nums = [10,9,2,5,3,7,101,18]
// Output: 4
// Explanation: The longest increasing subsequence is [2,3,7,101], therefore the length is 4.


// class Solution
// {
// public:
//     int lengthOfLIS(vector<int> &nums)
//     {
//         vector<int> tails(nums.size(), 0);

//         int size = 0;

//         for (int x : nums)      //range_based for loop
        
//         {
//             int i = 0, j = size;
//             while (i != j)
//             {
//                 int m = (i + j) / 2;
//                 if (x > tails[m])
//                     i = m + 1;                      //i represents the end of the tail
//                 else
//                     j = m;
//             }

//             tails[i] = x;

//             if (i == size)
//                 ++size;
//         }
//         return size;
//         }
// };