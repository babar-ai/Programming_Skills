
# number = 123

# digit_lst = [int(digit) for digit in str(number)]
# print(digit_lst)

# #to convert back list to digit

# number1 =  int(''.join(map(str,digit_lst)))
# number1 += 1
# print(number1)

class Solution(object):
    
    def plusOne(self, digits):
       
       #to convert into digits into str

       number = int(''.join(map(str,digits)))
       number += 1
       str_number = str(number)
       #convert back to list
       final_num = [int(str_number[digit]) for digit in range(len(str_number))]
       

       return final_num
   

ob1 = Solution()
digits = [1,2,3]
lst = ob1.plusOne(digits)
print(lst)

        