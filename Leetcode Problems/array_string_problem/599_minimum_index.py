#problem
'''
Given two arrays of strings list1 and list2, find the common strings with the least index sum.
A common string is a string that appeared in both list1 and list2.
A common string with the least index sum is a common string such that if it appeared at list1[i] and list2[j] then i + j should be the minimum value among all the other common strings

Return all the common strings with the least index sum. Return the answer in any order.

Example 3:
Input: list1 = ["happy","sad","good"], list2 = ["sad","happy","good"]
Output: ["sad","happy"]
Explanation: There are three common strings:
"happy" with index sum = (0 + 1) = 1.
"sad" with index sum = (1 + 0) = 1.
"good" with index sum = (2 + 2) = 4.
The strings with the least index sum are "sad" and "happy".
'''

#Solution:

class Solution():
    
        def findRestaurant(self, list1, list2):
       
            index_list2 = {item: i for i, item in enumerate(list2)}
            min_sum = float('inf')
            result = []

            for i, item in enumerate(list1):

                if item in index_list2:

                    index_sum =  i + index_list2[item]
            
                    if index_sum < min_sum:
                        min_sum = index_sum
                        result = [item]
                        

                    elif index_sum == min_sum:
                        result.append(item)
                        
                    
                
            return result
        
obj = Solution()
list1 = ["Shogun","Tapioca Express","Burger King","KFC"]
list2 = ["Piatti","The Grill at Torrey Pines","Hungry Hunter Steakhouse","Shogun"]
result = obj.findRestaurant(list1, list2)
print(result)
    
    