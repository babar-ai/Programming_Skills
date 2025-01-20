
def pivotInteger(n):
    
    total_sum = (n * (n+1))/2
    print("totoal sum",total_sum)
    for i in range(1,1+n):
        # 1,2,3,4,.....n
        #left sum
        left_sum = ((i-1) * i)//2

        print("left sum",left_sum)
        #right sum

        right_sum = int(total_sum - left_sum - i)
        print("right sum",right_sum)
        
    
        if(right_sum == left_sum):
            
            return i
        
    return -1



pivot_int = pivotInteger(8)
print(pivot_int)

# def pivotInteger(n):
#     total_sum = (n * (n + 1)) // 2
#     print("Total sum:", total_sum)
    
#     for i in range(1, n + 1):
#         # Calculate left sum
#         left_sum = (i * (i - 1)) // 2
#         right_sum = total_sum - left_sum - i
        
#         print("Left sum:", left_sum)
#         print("Right sum:", right_sum)
    
#         if left_sum == right_sum:
#             return i
    
#     return -1

# pivot_int = pivotInteger(8)
# print("Pivot integer:", pivot_int)
