import numpy as np

myarr = [1,2,3,4]
array =np.array(myarr)
print(array.shape[0])

new_array = np.zeros(array.shape[0])

print(new_array)

# [0. 0. 0. 0.]
'''

All elements must be of the same data type (e.g., all integers, all floats).
list: Can hold elements of different data types (e.g., integers, strings, floats, objects).
array: Faster and more memory-efficient for numerical computations, as they are optimized for such operations.


'''