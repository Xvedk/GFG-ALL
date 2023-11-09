class Solution:
    def columnWithMaxZeros(self,arr,N):
        max_zeros = 0
        max_zeros_column = -1

        for j in range(N):
            zeros_in_column = 0

            for i in range(N):
                if arr[i][j] == 0:
                    zeros_in_column += 1

            if zeros_in_column > max_zeros:
                max_zeros = zeros_in_column
                max_zeros_column = j

        return max_zeros_column
        # code here
