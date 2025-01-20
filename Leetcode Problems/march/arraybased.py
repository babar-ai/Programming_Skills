# Given an integer array nums sorted in non-decreasing order,
# return an array of the squares of each number sorted in non-decreasing order.

 
# Example 1:

# Input: nums = [-4,-1,0,3,10]
# Output: [0,1,9,16,100]
# Explanation: After squaring, the array becomes [16,1,0,9,100].
# After sorting, it becomes [0,1,9,16,100].
# Example 2:

# Input: nums = [-7,-3,2,3,11]
# Output: [4,9,9,49,121]

#difference b/w list and array in python
# 1. list :
#     1.can store any data type

# 2. array :
#     array is an object
#     all the element of array must have to same datatype
#     unlimited size in py
#       array consume less space
 
def square(list):
 new_list = []

 for i in list:
  new_list.append(i*i) 

 new_list.sort()
 print(new_list)
      


list1 = [-4,-1,0,3,10]   #incresing order
square(list1)