class Solution:
    def shortestCommonSupersequence(self, X, Y, m, n):
        # Create a table to store the length of the shortest common supersequence
        dp = [[0] * (n + 1) for _ in range(m + 1)]

        # Fill the table using bottom-up dynamic programming
        for i in range(m + 1):
            for j in range(n + 1):
                # If either of the strings is empty, the length of the supersequence is the sum of the lengths of the other string
                if i == 0:
                    dp[i][j] = j
                elif j == 0:
                    dp[i][j] = i
                # If the characters match, reduce one string length and consider the other
                elif X[i - 1] == Y[j - 1]:
                    dp[i][j] = 1 + dp[i - 1][j - 1]
                # If the characters don't match, consider the minimum of two options
                else:
                    dp[i][j] = 1 + min(dp[i - 1][j], dp[i][j - 1])

        # The length of the shortest common supersequence is the value at the bottom-right cell of the table
        return dp[m][n]
