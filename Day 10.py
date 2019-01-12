class Find:
    def majorityElement(self, numbers):
      majority = max(set(numbers), key = numbers.count)
      print (majority)
      return majority

find_temp = Find()
find_temp.majorityElement(input("Enter a list of space separated numbers: ").split())


# Alternative 1
# from statistics import mode
# class Find:
#     def majorityElement(self, numbers):
#         """
#         :type nums: List[int]
#         :rtype: int
#         """
#         print(mode(numbers))
#         return mode(numbers)
# find_temp = Find()
# find_temp.majorityElement([1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,5])
