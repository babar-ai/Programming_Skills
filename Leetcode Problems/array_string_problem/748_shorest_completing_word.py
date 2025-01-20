#problem

'''
Given a string licensePlate and an array of strings words, find the shortest completing word in words.

A completing word is a word that contains all the letters in licensePlate. Ignore numbers and spaces in licensePlate, and treat letters as case insensitive. If a letter appears more than once in licensePlate, then it must appear in the word the same number of times or more.

For example, if licensePlate = "aBc 12c", then it contains letters 'a', 'b' (ignoring case), and 'c' twice. Possible completing words are "abccdef", "caaacab", and "cbca".

Return the shortest completing word in words. It is guaranteed an answer exists. If there are multiple shortest completing words, return the first one that occurs in words.


Example 1:

Input: licensePlate = "1s3 PSt", words = ["step","steps","stripe","stepple"]
Output: "steps"
Explanation: licensePlate contains letters 's', 'p', 's' (ignoring case), and 't'.
"step" contains 't' and 'p', but only contains 1 's'.
"steps" contains 't', 'p', and both 's' characters.
"stripe" is missing an 's'.
"stepple" is missing an 's'.
Since "steps" is the only word containing all the letters, that is the answer.

'''

#solution 


class Solution:
    
    def shortestCompletingWord(self, licensePlate, words):
        
        #filter only alphabetic character
        filtered = ''.join(char.lower() for char in licensePlate if char.isalpha())
        
        #find frequence for each character in filtered
        frequency = {}
        for char in filtered:
            frequency[char] = frequency.get(char,0)+1
        
        #we can also use "counter()" funtion for finding frequencies of each character
        from collections import Counter
        frequency = Counter(filtered)
        
        #Count the Characters in the Word:
        shortest_word = None
        for word in words:
            word_freq = Counter(word)
            
            if all(word_freq[char] >= requird_count for char, requird_count in frequency.items()):
                if shortest_word is None or len(word) < len(shortest_word):
                    shortest_word = word
        
        return shortest_word
                    
                               
            
            
            
             
        
        
        
    
        
        
        
        
        
    
    
    
licensePlate = "1s3 PSt"   
words = ["step","steps","stripe","stepple"]

ob1 = Solution()
result = ob1.shortestCompletingWord(licensePlate, words)
print(result)