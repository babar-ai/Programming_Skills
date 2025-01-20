#include <iostream>
#include <vector>

using namespace std;

int majorityElement(vector<int> &nums)
{
    int size = nums.size();
    int half_size = size / 2;
    int majority_elem = 0;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        majority_elem = nums[i];

        for (int i = 0; i < size; i++)
        {
            if (majority_elem == nums[i])
            {
                count++;
            }
        }
      if (count > half_size)
        {
                    
                    return majority_elem;
        }
    }
}

int main()
{

    vector<int> nums = {2, 4, 4, 4, 6, 4, 6, 4};

   cout<< majorityElement(nums);
    
    return 0;
}