
class Solution(object):

    def Remove_element(self,nums,val):
        
        for i in range(len(nums)):
            
            if nums[i] == val:
                nums.remove(nums[i])
        
        return nums
    
    
ob1 = Solution()
nums = [0,1,2,2,3,0,4,2]
val = 2
result = ob1.Remove_element(nums,val)
print(result)
        
        
        