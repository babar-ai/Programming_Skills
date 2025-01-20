# problem:
# You are given an array nums consisting of positive integers.

# Return the total frequencies of elements in nums such that those elements all have the maximum frequency.

# The frequency of an element is the number of occurrences of that element in the array.

 

# Example 1:

# Input: nums = [1,2,2,3,1,4]
# Output: 4
# Explanation: The elements 1 and 2 have a frequency of 2 which is the maximum frequency in the array.
# So the number of elements in the array with maximum frequency is 4.
# Example 2:

# Input: nums = [1,2,3,4,5]
# Output: 5
# Explanation: All elements of the array have a frequency of 1 which is the maximum.
# So the number of elements in the array with maximum frequency is 5.
 
 
 
from collections import defaultdict

 
def maxFrequencyElements( nums):

    #to create hashtable
    #note: a dictionary in Python is essentially a hashtable, but the term "hashtable" is often used
    #more broadly to refer to the concept of a data structure that maps keys to values using a hash function, whereas "dictionary" specifically refers to the Python implementation of this concept.
  
  count = {}

  for i in nums:

     if i in count:
      count[i] += 1
    
     else:
      count[i] = 1

  return count


nums = [1,2,3,4,4,5]
max_freq = maxFrequencyElements(nums)
print(max_freq)

#how loop works
# Here's a step-by-step example with the input list [1, 2, 3, 4, 4, 5]:

# Iteration 1: i = 1
# count = {1: 1}
# Iteration 2: i = 2
# count = {1: 1, 2: 1}
# Iteration 3: i = 3
# count = {1: 1, 2: 1, 3: 1}
# Iteration 4: i = 4
# count = {1: 1, 2: 1, 3: 1, 4: 1}
# Iteration 5: i = 4
# count = {1: 1, 2: 1, 3: 1, 4: 2}
# Iteration 6: i = 5
# count = {1: 1, 2: 1, 3: 1, 4: 2, 5: 1}