class _2D_Matrix:
    def searchMatrix(self, matrix, target):

       # :type matrix: List[List[int]]
       # :type target: int
       # :rtype: bool
      #efficient algorithm
        if matrix == [] or matrix is None:
            print("Number is not in matrix")
            return False
        column = len(matrix[0]) - 1
        row = 0
        while column >= 0 and row < len(matrix):
            if matrix[row][column ] == target:
                print("Number is present in matrix")
                return True
            elif matrix[row][column] > target:
                column -= 1
            else:
                row += 1
        print("Number is not in matrix")        
        return False
obj = _2D_Matrix()
obj.searchMatrix( [
  [1,   4,  7, 11, 15],
  [2,   5,  8, 12, 19],
  [3,   6,  9, 16, 22],
  [10, 13, 14, 17, 24],
  [18, 21, 23, 26, 30]
], int(input("What number do you want to search for? ")))
