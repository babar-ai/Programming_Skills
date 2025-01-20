#include <iostream>

using namespace std;

class Solution
{
public:
    int sum(int nums[], int target, int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {

                if (nums[i] + nums[i + j] == target)
                {
                    return {i, j};
                }
            }
        }
    }
};

int main()
{
    Solution s1;
    int n, target;
    cout << "how many elements you want to add in arry : ";
    cin >> n;
    int *array = new int(n);
    cout << "enter the element of array:" << endl;
    for (int i = 0; i <= n; i++)
    {
        cin >> array[i];
    }
    cout << "enter the target element " << endl;
    cin >> target;

    // s1.sum(array, target, n);
    cout << "result" << endl;
    s1.sum(array, target, n);
    return 0;
}
