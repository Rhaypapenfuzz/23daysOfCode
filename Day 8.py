class Solution:
  def reverse(self, number):
    negative = False
    if number  < 0 :
      negative = True
      number = abs(number)
    reserved_num = 0
    exponent = len(str(number))
    for digit in str(number):    #eg: 123
      exponent = exponent - 1    #get exponent of 10
      place_digit = number % 10  #get oneth place value: 3 , 2 , 1

      num = place_digit * (10 ** exponent)  #300 , 20, 1

      reserved_num += num         #add reversed place value 300 + 20 + 1
      number -= place_digit       # 123-3 =120, 12-2 = 10
      number = number // 10       # 120//10 = 12, 10//10 = 1

    if negative == True:
      reserved_num *= -1
    if (2**31)-1 >= reserved_num >= -2**31:  # valid range for 32-bit signed integer
        print(reserved_num)
        return reserved_num
    else:
        return 0

temp = Solution()   #Instance of the class
temp.reverse(int(input("Enter a number to reverse it: ")))  #Calling method within the class with user inputed argument
