
# def intersection( self,nums1, nums2):

#     num3 = []

#     for i in nums1:
#         for j in nums2:
#             if i == j and i not in num3:
#                 num3.append(j)
#     return num3





# nums1 = [4,9,5]
# nums2 = [9,4,9,8,4]
# print(intersection(nums1,nums2))



# #2nd approch
# class Solution(object):
#     def intersection( nums1, nums2):
#         """
#         :type nums1: List[int]
#         :type nums2: List[int]
#         :rtype: List[int]
#         """
#         return set(nums1).intersection(set(nums2))



#3rd approch


def intersection( nums1, nums2):

    num3 = []
    set1 = list(set(nums1))
    set2 = list(set(nums2))
    
    for i in set1:
            if i in set2:
                num3.append(i)
    return num3





nums1 = [4,9,5]
nums2 = [9,4,9,8,4]
print(intersection(nums1,nums2))




# #note
# To avoid storing duplicate values in an array, you can use a set 
# instead of a list. Sets in Python are data structures that store unique elements.
# When you try to add a duplicate value to a set, it will simply ignore it. Here's how you can do it:

# python
# Copy code
# # Using set
# mylist = set()
# set.add(12)
