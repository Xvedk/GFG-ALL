class Solution:
    def maxGold(self, n, m, M):
        dp = [[0] * m for _ in range(n)]

        for j in range(m - 1, -1, -1):
            for i in range(n):
                right = dp[i][j + 1] if j + 1 < m else 0
                up_right = dp[i - 1][j + 1] if i - 1 >= 0 and j + 1 < m else 0
                down_right = dp[i + 1][j + 1] if i + 1 < n and j + 1 < m else 0

                dp[i][j] = M[i][j] + max(right, up_right, down_right)

        max_gold = 0
        for i in range(n):
            max_gold = max(max_gold, dp[i][0])

        return max_gold
