# //problem
# // Given an integer n, return true if it is a power of two. Otherwise, return false.
# // An integer n is a power of two, if there exists an integer x such that n == 2x.

# // Example 1:

# // Input: n = 1
# // Output: true
# // Explanation: 20 = 1

# //solution


import itertools

def isPowerOfTwo(n):

     for i in itertools.count():   # itertools.count(n): infiniate loop where n represent starting point
        
        result = pow(2,i)
        if result == n:
            return True
            

        elif result > n:
            return False
            

num = int(input("enter a number:"))
print(isPowerOfTwo(num))


# def isPowerOfTwo(n):
#     i = 0
#     while True:
#         result = pow(2, i)
#         if result == n:
#             return True
#         elif result > n:
#             return False
#         i += 1

# def main():
#     n = int(input("Enter a number: "))
#     res = isPowerOfTwo(n)
#     if res:
#         print("True")
#     else:
#         print("False")

# if __name__ == "__main__":
#     main()


