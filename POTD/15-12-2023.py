class Solution:
    def nthPoint(self, n):
        # Define the modulo value
        MOD = 10**9 + 7

        # Initialize an array to store the number of ways to reach each point
        dp = [0] * (n + 1)

        # Base cases
        dp[0] = 1
        dp[1] = 1

        # Calculate the number of ways for each point from 2 to n
        for i in range(2, n + 1):
            dp[i] = (dp[i - 1] + dp[i - 2]) % MOD

        # Return the result for point n
        return dp[n]
