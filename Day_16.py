
#Solution 1
class Stock:
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        if (prices is None or not prices or len(prices) == 1):
            return 0
        else:
            salePrice = prices[0]
            cost = prices[0]
            maxProfit = 0
            for i in range(0,len(prices)):
                if(prices[i] > salePrice):
                    salePrice = prices[i]
                    if ((salePrice - cost) > maxProfit):
                        maxProfit = salePrice - cost
                if(prices[i] < cost):
                    cost = salePrice = prices[i]
            print(maxProfit)
            return maxProfit
#Solution 2
    def maxProfit2(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        maxProfit = 0
        for i in range(0, len(prices)):
            cost = prices[i]
            for j in range(i+1, len(prices)):
                salePrice = prices[j]
                if(salePrice - cost) > maxProfit:
                    maxProfit = salePrice - cost
                    
        print(maxProfit)
        return maxProfit
                  
obj = Stock()

obj.maxProfit([7,1,5,3,6,4])
obj.maxProfit([7,6,4,3,1])
              
obj.maxProfit2([7,1,5,3,6,4])
obj.maxProfit2([7,6,4,3,1])
