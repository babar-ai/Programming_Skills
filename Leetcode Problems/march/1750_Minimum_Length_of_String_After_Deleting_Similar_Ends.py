
# Input: s = "cabaabac"
# Output: 0
# Explanation: An optimal sequence of operations is:
# - Take prefix = "c" and suffix = "c" and remove them, s = "abaaba".
# - Take prefix = "a" and suffix = "a" and remove them, s = "baab".
# - Take prefix = "b" and suffix = "b" and remove them, s = "aa".
# - Take prefix = "a" and suffix = "a" and remove them, s = "".



class Solution(object):
    # def minimumLength(self, s):
    #     """
    #     :type s: str
    #     :rtype: int
    #     """

        # left = 0
        # right = len(s) - 1
        
        # while left < right:
        #     if s[left] == s[right]:   
        #         print('h')      ## Create a new string that excludes the character at the specified index
        #         new_string = s[:left] + s[right + 1:]                               #new_string = s[:index_to_delete] + s[index_to_delete + 1:]
        #         left += 1
        #         right -= 1
        #     else:
        #         print('h')      ## Create a new string that excludes the character at the specified index
        #         left += 1
        #         right -= 1
        #         new_string = s
        # return len(new_string)

    def minimumLength(s) -> int:
        left = 0
        right = len(s) - 1
    
        while left < right and s[left] == s[right]:
            char = s[left]
        while left <= right and s[left] == char:
            left += 1
        while right >= left and s[right] == char:
            right -= 1
    
        return right - left + 1

s = "cabaabac"
S1 = Solution()
leng = S1.minimumLength(s)
print(leng)





