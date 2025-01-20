#definiation

'''
The enumerate function in Python is a built-in function that allows you to loop through an iterable (like a list, tuple, or string) 
while keeping track of both the index and the value of each element. 
This is particularly useful when you need to reference the position of each item during iteration.
'''

fruits = ['apple', 'banana', 'cherry']
for index, fruit in enumerate(fruits):
    print(index, fruit)

# If you want the index to start from 1 instead of 0, you can set the start parameter:

for index, fruit in enumerate(fruits, start=1):
    print(index, fruit)

# we can use inside of dictionary also
list2 = ['babar','mardan']
index_list2 = {item: i for i, item in enumerate(list2)}

# marks =[1,2,3,43,22]

# #now if i want to print the value at index 4

# # index = 0

# # for mark in marks:
# #     if index == 4:
# #         print("congrate babar!")
    
# #     index+=1
    
# #enumerate funtion

# # for index,mark in enumerate(marks):
# #     if index == 4:
# #         print("congrate babar!")
    
    
    
# print(len([sum([1,1,1])]))