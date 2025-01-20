


# class Solution(object):
#     def exist(self, board, word):
#         result = True    
#         for row in board:
#             for element in row:
#                 for i in range(len(word)):
#                     if element == word[i]:
#                         result = True
#                     else:
#                         result= False
#         if result ==True:
#             print("word exit")
#         else:
#             print("word not exits")

 
    ##################################################################
class Solution:
    def exist(self, board, word):
        if not board:
            return False

        def dfs(board, i, j, word):
            if len(word) == 0:
                return True
            
            if i < 0 or i >= len(board) or j < 0 or j >= len(board[0]) or board[i][j] != word[0]:
                return False

            temp = board[i][j]
            board[i][j] = '#'
            found = dfs(board, i+1, j, word[1:]) or dfs(board, i-1, j, word[1:]) or dfs(board, i, j+1, word[1:]) or dfs(board, i, j-1, word[1:])
            board[i][j] = temp
            return found

        for i in range(len(board)):
            for j in range(len(board[0])):
                if board[i][j] == word[0] and dfs(board, i, j, word):
                    return True

        return False

# Example usage:
board = [
    ["A","B","C","E"],
    ["S","F","C","S"],
    ["A","D","E","E"]
]
word = "ABBCC"
obj = Solution()
print(obj.exist(board, word))  # Output: True

      
        




# board = [["A","B","C","D"],["E","F","G","H"],["I","J","K","L"]]
# word = input("enter word  ")
# obj = Solution()
# obj.exist(board,word)

#leet code solution 
class Solution:
    def exist(self, board, word):
        def backtrack(i, j, k):
            if k == len(word):
                return True
            if i < 0 or i >= len(board) or j < 0 or j >= len(board[0]) or board[i][j] != word[k]:
                return False
            
            temp = board[i][j]
            board[i][j] = ''
            
            if backtrack(i+1, j, k+1) or backtrack(i-1, j, k+1) or backtrack(i, j+1, k+1) or backtrack(i, j-1, k+1):
                return True
            
            board[i][j] = temp
            return False
        
        for i in range(len(board)):
            for j in range(len(board[0])):
                if backtrack(i, j, 0):
                    return True
        return False