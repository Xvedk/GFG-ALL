class Solution:
    def sumTriangles(self, matrix, n):
        upper_sum = 0
        lower_sum = 0

        for i in range(n):
            upper_sum += sum(matrix[i][i:])  # Sum the upper triangle elements
            lower_sum += sum(matrix[i][:i+1])  # Sum the lower triangle elements

        return [upper_sum, lower_sum]
