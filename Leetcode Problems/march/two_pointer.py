
class Solution(object):
    def findMaxK(self, nums):
        
        nums.sort()
        max_num = float("-inf")
        left , right = 0 , len(nums) - 1
        while left < right:

            if nums[left] + nums[right] == 0:
                max_num = max(nums[left],nums[right])
                left += 1
                right -= 1 
            elif nums[left] + nums[right] < 0:
                left += 1 
            else:
                right -= 1
        
        
        return max_num if max_num != float('-inf') else -1
    

nums = [-1,10,6,7,-7,1]
S1 = Solution()
print(S1.findMaxK(nums))
