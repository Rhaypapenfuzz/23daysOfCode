class Solution:
    def generate(self, numRows):
        """
        :type numRows: int
        :rtype: List[List[int]]
        """
        myList = []      # Inner List
        Pascals_triangle = []   # Overall List

        first_counter_1 = 0     
        for i in range(1, numRows + 1):
          first_counter_1 += 1 
          current_number = 1   # Set first number back to 1

          second_counter = 0
          for j in range(1, first_counter_1 + 1):
            second_counter += 1

            myList.insert(second_counter, int(current_number))
            current_number = current_number * (first_counter_1 - second_counter)/second_counter # Pascal triangle calculation
          Pascals_triangle.append([elem for elem in myList])  # Put myList in larger List
          myList.clear()  # Empty current myList
        print(Pascals_triangle)
        return(Pascals_triangle) 

trial = Solution()
trial.generate(int(input("Enter the number of lines of Pascal's triangle you want to generate: "))) #Call function from class with user input as argument

