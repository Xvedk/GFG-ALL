class Solution:
    def countStrings(self, n):
        mod = 1000000007

        # Initialize the dp array to store the count of valid strings of length i
        dp = [0] * (n + 1)

        # Base cases
        dp[0] = 1
        dp[1] = 2

        # Fill the dp array
        for i in range(2, n + 1):
            # For each position, you can append '0' to any valid string of length i-1,
            # or append '01' to any valid string of length i-2
            dp[i] = (dp[i - 1] + dp[i - 2]) % mod

        return dp[n]
