class Solution:
#Solution 1
  def countPrime(self, num):
      if num < 2:
          return 0
      if num == 2:
          return 1
      primelist = [1] * num
      primelist[0] = primelist[1] = 0
      for i in range(2, int(num ** 0.5) + 1):
          if primelist[i]:
              primelist[i * i: num: i] = [0] * len(primelist[i * i: num: i])
      print(sum(primelist))
      return sum(primelist)

#Count Prime numbers Solution 2
  def countPrime2(self, num):
      count = 0
      for number in range(2,num):
        Prime = True
        for j in range(2,number):
          if number % j == 0:
            Prime = False
            break
        if Prime:
          count += 1
      print(count)
      return count

obj = Solution()
obj.countPrime(200)
obj.countPrime2(200)
 
