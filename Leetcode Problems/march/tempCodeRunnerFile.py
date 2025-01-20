
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