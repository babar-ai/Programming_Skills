
# all() funtion 
'''
In Python, all() is a built-in function that checks if all elements in an iterable (like a list, tuple, or generator) are True. 
If every element in the iterable is True, all() returns True; otherwise, it returns False.

'''

#example # 1
nums = [2,2,4,1,3]

print(all(num%2 == 0 for num in nums))

# output : False


#example # 2

# List with all True values
print(all([True, True, True]))  # Output: True

# List with one False value
print(all([True, False, True]))  # Output: False
