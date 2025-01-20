
#problem 500.keyboard_Row
'''
Given an array of strings words, return the words that can be typed using letters of the alphabet on only one row of American keyboard like the image below.

In the American keyboard:

the first row consists of the characters "qwertyuiop",
the second row consists of the characters "asdfghjkl", and
the third row consists of the characters "zxcvbnm".

Example 1:

Input: words = ["Hello","Alaska","Dad","Peace"]
Output: ["Alaska","Dad"]
'''



class Solution:
    
    def row_1(self, char_array):
        row_1 = 'qwertyuiop'
        for ch in char_array:
            if ch.lower() not in row_1:
                return False
        return True
    
    def row_2(self, char_array):
        row_2 = 'asdfghjkl'
        for ch in char_array:
            if ch.lower() not in row_2: 
                return False
        return True
    
    def row_3(self, char_array):
        row_3 = 'zxcvbnm'
        for ch in char_array:
            if ch.lower() not in row_3: 
                return False
        return True
    
    def findwords(self, words):
        mylist = []
        for word in words:
            char_array = list(word)
            result1 = self.row_1(char_array)
            result2 = self.row_2(char_array)
            result3 = self.row_3(char_array)
            
            if result1 or result2 or result3:
                mylist.append(word)
        
        return mylist

# Example usage
ob1 = Solution()
words = ["Hello", "Alaska", "Dad", "Peace"]
output = ob1.findwords(words)
print(output)

    
#optimize solution   

# class Solution:
    
#     def findwords(self, words):
#         # Define the keyboard rows
#         row_1 = 'qwertyuiop'
#         row_2 = 'asdfghjkl'
#         row_3 = 'zxcvbnm'
        
#         # Initialize an empty list to store the valid words
#         mylist = []
        
#         for word in words:
#             # Convert the word to lowercase for case-insensitive comparison
#             char_array = list(word.lower())
            
#             # Determine the row based on the first character of the word
#             if char_array[0] in row_1:
#                 target_row = row_1
#             elif char_array[0] in row_2:
#                 target_row = row_2
#             else:
#                 target_row = row_3
            
#             # Check if all characters are in the target row
#             if all(ch in target_row for ch in char_array):
#                 mylist.append(word)  # Add the word to the result list if it meets the criteria
        
#         return mylist

# # Testing the refactored code
# ob1 = Solution()
# words = ["Hello", "Alaska", "Dad", "Peace"]
# output = ob1.findwords(words)
# print(output)  # Expected output: ['Alaska', 'Dad']

    
    
    
    
    
    
    
    
        
        