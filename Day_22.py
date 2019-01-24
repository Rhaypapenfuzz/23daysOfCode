class Solution:
    def isPowerOfThree(self, n):
        """
        :type n: int
        :rtype: bool
        """
        if n <= 0:
            return False
        if n == 1:
            return True
        while n % 3 == 0:
            if n == 3:
                print("Your number is a power of 3")
                return True
            n = n / 3
        print("Your number is not a power of 3")
        return False
obj = Solution()
obj.isPowerOfThree(int(input("Enter a number: ")))
