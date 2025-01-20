#problem: 
'''
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2

'''

class Solution():
    
    def Search_insert(self,nums,target):
        
        n = len(nums)
        left = 0
        right = n - 1
     
        
        while left <= right:
            
            mid = (right + left) // 2
            
            if target == nums[mid]:
                return mid
            
            if target > nums[mid]:
                left = mid + 1
            
            else:
                right = mid - 1
        
        return left       #always return the low or left if the if you dont find the target element.bcz it goes into unbound position 
                    
obj1 = Solution()
nums = [1,3,5,6]
target = 2
result = obj1.Search_insert(nums,target)
print(f'target valu is located at index {result} in the array')