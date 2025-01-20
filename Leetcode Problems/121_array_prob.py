

class Solution(object):
    
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        min_price =  float('inf')            #float('inf') is a representation of positive infinity in Python, meaning it’s larger than any other number.This creates a floating-point value representing positive infinity
        max_profit = 0
        
        for price in prices:
            
            if price < min_price:
                min_price = price
            
            profit = price - min_price
                
            if max_profit < profit:
                max_profit = profit
                
        return max_profit
                    
            
            
            
     
                    
s1 = Solution()

prices = [7,1,5,3,6,4]
result = s1.maxProfit(prices)
print(result)






