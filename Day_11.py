class Solution:
    def generate(self, numRows):
        """
        :type numRows: int
        :rtype: List[List[int]]
        """
        myList = [1]
        Pascals_triangle = []
        if numRows <= 0:
            return Pascals_triangle
            
        first = 0
        second = 1
        Pascals_triangle.append([elem for elem in myList])      #[ [1] ]
        
        for i in range(0, numRows - 1):
            next_number = first + second
            myList.insert(int(((len(myList))/2)), next_number)
            if len(myList) % 2 == 0:
              myList[int((len(myList)/2))] = next_number
            Pascals_triangle.append([elem for elem in myList])
            first = second
            second = next_number
            if len(myList) % 2 == 0:
              first = next_number
        print(Pascals_triangle)  

trial = Solution()
trial.generate(4)
