class Solution:
    def betterString(self, str1, str2):
        mod = 10**9 + 7

        def countDistinctSubsequences(s):
            lastOccurrence = {}
            dp = [0] * (len(s) + 1)
            dp[0] = 1

            for i, char in enumerate(s):
                dp[i + 1] = (2 * dp[i]) % mod
                if char in lastOccurrence:
                    dp[i + 1] = (dp[i + 1] - dp[lastOccurrence[char]] + mod) % mod
                lastOccurrence[char] = i

            return dp[-1] - 1  # Subtract 1 to exclude the empty subsequence

        count1 = countDistinctSubsequences(str1)
        count2 = countDistinctSubsequences(str2)

        return str1 if count1 >= count2 else str2
