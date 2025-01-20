from collections import defaultdict

 
def maxFrequencyElements( nums):

    #to create hashtable
    #note: a dictionary in Python is essentially a hashtable, but the term "hashtable" is often used
    #more broadly to refer to the concept of a data structure that maps keys to values using a hash function, whereas "dictionary" specifically refers to the Python implementation of this concept.
    hashtable = defaultdict(list)                         

    # Store array elements in the hashtable
    for index, value in enumerate(nums):
        hashtable[index] = value
    
    print(hashtable)


nums = [1,2,3,4,5,6,7,8,9,22,44,66]
maxFrequencyElements(nums) 