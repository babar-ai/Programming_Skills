# 88. Merge Sorted Array

'''
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.


'''
class Solution():
    
    def merge(self, num1, m, num2, n):               # where m, n = 3, 3
        
        i = m - 1     #nums1 has a length of m + n, 
        j = n - 1
        k = m + n - 1
        
        while j >= 0:
            
            if i >= 0 and num1[i] > num2[j]:
                
                num1[k] = num1[i]
                 
                i -= 1
                
            else:
                
                num1[k] = num2[j]
                j -= 1
                
            k -= 1
            
        return num1
    
                
                
        


print('hello world')
num1 = [1,2,3,0,0,0]
m = 3
num2 = [2,5,6]
n = 3

ob1 = Solution()
num1 = ob1.merge(num1, m, num2, n)
print(num1)