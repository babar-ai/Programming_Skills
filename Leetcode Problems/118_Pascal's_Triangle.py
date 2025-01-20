# #problem:
# '''
# Given an integer numRows, return the first numRows of Pascal's triangle.

# In Pascal's triangle, each number is the sum of the two numbers directly above it as shown
# Example 1:

# Input: numRows = 5
# Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
# '''

# # # solution

# class Solution():
    
#     def generate(self, numrows):
        
#         triangle = []
        
#         for i in range(numrows):
            
#             row = [1] * (1 + i)    #step 1  create 
            
#             for j in range(1, i):      # The range function in range(start, stop) generates numbers starting from start up to, but not including, stop.
#                 row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j]

#             triangle.append(row)
            
#         return triangle
            
            
# ob1 = Solution()
# result = ob1.generate(5)
# print(result[1])




#problem:
'''
Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown
Example 1:

Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
'''

# # solution

class Solution():
    
    def generate(self, rows_index):
        
        row = [1]
        
        for i in range(len(rows_index)):
            
            new_row = [1]
            
            for j in range(1,len(row)):
                
                
            
            
            
            
ob1 = Solution()
result = ob1.generate(5)
print(result[0])
