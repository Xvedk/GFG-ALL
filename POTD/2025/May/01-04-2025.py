class Solution:

	def nthRowOfPascalTriangle(self, n):
	    row = [1]
        for i in range(1, n):
            row.append(row[-1] * (n - i) // i)
        return row
