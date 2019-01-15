class Solution:
    def singleNumber(self, num_array):
        #:type num_array: List[int]
        #:rtype: int

        print("Solution 1: ", end="")
        mydict = dict(zip(num_array, map(num_array.count,num_array)))   #create dictionary from array
        for key, value in mydict.items(): 
          if value == 1:
            print (key)
        
        print("Solution 2: ", end="")
        [print(num) for num in set(num_array) if num_array.count(num) == 1]

        print("Solution 3: ", end="")
        for number in set(num_array):
          if num_array.count(number) == 1:
            print(number)
            return number

use_class = Solution()
use_class.singleNumber([4,1,2,1,2])   #Call function from class Solution
