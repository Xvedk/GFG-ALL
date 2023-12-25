class Solution:

    # Function for finding determinant of matrix.
    def determinantOfMatrix(self, matrix, n):
        # Base case: if the matrix is 1x1, return its only element
        if n == 1:
            return matrix[0][0]

        # Initialize the determinant
        det = 0

        # Loop through the first row of the matrix to calculate the determinant
        for i in range(n):
            # Calculate the cofactor for the current element
            cofactor = self.getCofactor(matrix, 0, i, n)

            # Recursive call to find the determinant of the submatrix
            det += ((-1) ** i) * matrix[0][i] * self.determinantOfMatrix(cofactor, n - 1)

        return det

    def getCofactor(self, matrix, row, col, n):
        # Initialize a submatrix for the cofactor
        cofactor = [[0] * (n - 1) for _ in range(n - 1)]

        # Variables to track indices for submatrix
        i, j = 0, 0

        # Loop through the original matrix, skipping the specified row and column
        for r in range(n):
            for c in range(n):
                if r != row and c != col:
                    cofactor[i][j] = matrix[r][c]
                    j += 1
                    if j == n - 1:
                        j = 0
                        i += 1

        return cofactor
