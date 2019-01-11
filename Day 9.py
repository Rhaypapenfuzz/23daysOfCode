class SolveMath:
    def mySqrt(self, x):
        """
        :type x: int
        :rtype: int
        """
        sqrt_x = x ** 0.5
        return print(int(sqrt_x))

solution_1 = SolveMath()
solution_1.mySqrt(int(input("Enter a number for integer square root: ")))
