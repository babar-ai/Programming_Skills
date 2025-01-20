class Solution(object):
    def reversePrefix(self, word, ch):
      if ch not in word:
        return word
      index_ch = word.index(ch)
      
      return word[index_ch::-1] + word[index_ch+1::]







word = "baber"
ch = 'e'
S1 = Solution()
reverse_string = S1.reversePrefix(word,ch)
print("reverse string is {}".format(reverse_string))