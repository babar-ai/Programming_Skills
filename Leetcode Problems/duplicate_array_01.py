
class Solution(object):
    def removeDuplicates(self, nums):

        left = 1
    
        for r in range(1 , len(nums)):
            
            if nums[r] != nums[r-1]:
                nums[left] = nums[r]
                left += 1
                
        return left
                
            
                


obj1 = Solution()
nums = [0,0,1,1,1,2,2,3,3,4]
result = obj1.removeDuplicates(nums)
print(result)





    
        