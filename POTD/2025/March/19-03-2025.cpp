class Solution {
public:
    int maxProfit(int K, int N, int A[]) {
        // Check for edge cases
        if (N <= 1 || K == 0) {
            return 0;
        }

        // If K is large enough, the problem becomes the same as unlimited transactions.
        if (K >= N / 2) {
            int maxProfit = 0;
            for (int i = 1; i < N; ++i) {
                if (A[i] > A[i - 1]) {
                    maxProfit += A[i] - A[i - 1];
                }
            }
            return maxProfit;
        }

        // DP array to store the maximum profit for each transaction and day
        std::vector<std::vector<int>> dp(K + 1, std::vector<int>(N, 0));

        for (int k = 1; k <= K; ++k) {
            int maxDiff = -A[0];
            for (int i = 1; i < N; ++i) {
                dp[k][i] = std::max(dp[k][i - 1], A[i] + maxDiff);
                maxDiff = std::max(maxDiff, dp[k - 1][i] - A[i]);
            }
        }

        return dp[K][N - 1];
    }
};

